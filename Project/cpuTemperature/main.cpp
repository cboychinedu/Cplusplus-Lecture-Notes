// Including the headers 
#include <iostream> 
#include <fstream> 
#include <string> 
#include <vector> 
#include <unistd.h>

// Function to read the CPU temperature From a thermal zone file. 
// the thermal zone path can vary between systems. 
float readCpuTemperature(const std::string& thermalZonePath) {
	std::ifstream tempFile(thermalZonePath); 

	// if the temp file is open 
	if (!tempFile.is_open()) {
		std::cerr << "Error: Could not open thermal zone files at: " << thermalZonePath << std::endl; 

		// return -1.0f 
		return -1.0f; 
	}

	// The temperature is typically a number in milidegree celsisu 
	int temperatureMilliCelsius; 
	tempFile >> temperatureMilliCelsius; 

	// Convert from millidegrees Celsius to degree celsius 
	float temperatureCelsius = static_cast<float>(temperatureMilliCelsius) / 1000.0f; 

	// closing up 
	tempFile.close(); 

	// return the value 
	return temperatureCelsius; 
}


// Running the main function 
int main(void) {
	// Displaying the reading temperature 
	std::cout << "Reading CPU Temperature..." << std::endl; 

	/* This path is a common location on many Linux systems. 
	 * If it doesn't work, you may need to check your system's
	 * /sys/class/thermal/ directory for the correct path. 
	*/

	std::string thermalZonePath = "/sys/class/thermal/thermal_zone0/temp"; 

	// Using while loop 
	while (true) {
		// Getting the temperature 
		float tempT = readCpuTemperature(thermalZonePath); 

		// if the temperature is reading
		if (tempT > 0) {
			// Display the readings 
			std::cout << "Current CPU Temperature: " << tempT << " °C" << std::endl; 

		}

		// else if the temperature is not greater than zero 
		else {
			// Dislay the error message 
			std::cerr << "Could not read temperature. Please check the thermal zone path. " << std::endl; 
		}

		// Wait for 2 seconds before the next reading. 
		sleep(2); 
	}

	// closing up 
	return 0; 
}