// Including the header files 
#include <iostream>
#include <string>
#include <opencv2/objdetect.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>


// Running the main function 
int main(int args, char** argv) {
	// Load the Haar Cascade for face detection 
	cv::CascadeClassifier faceCascade; 
	std::string cascadePath = "cascadeFile/face.xml"; 

	// If the face cascase exists 
	if (!faceCascade.load(cascadePath)) {
		// Displaying the error message 
		std::cerr << "Error loading the face cascade file: " << cascadePath << std::endl; 

		// close the program 
		return -1; 
	}

	// Open the default camera 
	cv::VideoCapture cap(0); 

	// If the camera is not opened 
	if (!cap.isOpened()) {
		std::cerr << "Error: Could not open camera." << std::endl; 

		// closing up 
		return -1; 

	}

	// Getting the frames 
	cv::Mat frame; 
	cv::Mat grayFrame; 

	// Using while loop 
	while (true) {
		// Read a new frame from the camera 
		cap >> frame; 

		// if the frame is empty 
		if (frame.empty()) {
			std::cerr << "Error: No frame captured. " << std::endl; 
			break; 
		}

		// Convert the frame to grayscale for faster process 
		cv::cvtColor(frame, grayFrame, cv::COLOR_BGR2GRAY); 
		cv::equalizeHist(grayFrame, grayFrame); 

		// Detect faces 
		std::vector<cv::Rect> faces; 
		faceCascade.detectMultiScale(grayFrame, faces, 1.1, 2, 0 | cv::CASCADE_SCALE_IMAGE, cv::Size(30, 30)); 

		// Draw a rectangle around each detected face 
		for (const auto& face: faces) {
			// Drawing the rectangle 
			cv::rectangle(frame, face, cv::Scalar(0, 255, 0), 2); 
		}

		// Resizing the frames 
		cv::resizeWindow("Face Detection", 800, 500); 

		// Display the frame with detected faces 
		cv::imshow("Face Detection", frame); 

		// Break the loop if 'q' is pressed 
		if (cv::waitKey(1) == 'q') {
			break; 
		}

	}

	// Cleaning up 
	cap.release(); 
	cv::destroyAllWindows(); 

	// closing up 
	return 0; 

}