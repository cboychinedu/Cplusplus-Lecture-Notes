// including the header files 
#include <iostream> 
#include <fstream> 
#include <string> 
#include <vector> 
#include <unistd.h>

// Creating a function to reading the temperature 
// Function to read the CPU temperature From a thermal zone file. 
// the thermal zone path can vary between systems. 
double readCpuTemperature(const std::string& thermalZonePath) {
	std::ifstream tempFile(thermalZonePath); 

	// if the temp file is open 
	if (!tempFile.is_open()) {
		std::cerr << "Error: Could not open thermal zone files at: " << thermalZonePath << std::endl; 

		// return -1.0f 
		return -1.0f; 
	}

	// The temperature is typically a number in milidegree celsisu 
	double temperatureMilliCelsius; 

	// Saving the tempT value into the temperature mili celsius 
	tempFile >> temperatureMilliCelsius; 

	// Convert from millidegrees Celsius to degree celsius 
	double temperatureCelsius = static_cast<double>(temperatureMilliCelsius) / 1000.0f; 

	// closing up 
	tempFile.close(); 

	// return the value 
	return temperatureCelsius; 
}