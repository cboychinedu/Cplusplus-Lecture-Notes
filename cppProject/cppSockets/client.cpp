// Including the header files 
#include <iostream> 
#include <string> 
#include <cstring>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>


// Running the main function 
int main(int args, char** argv) {
	// Creating the socket 
	int clinetSocket = socket(AF_INET, SOCK_STREAM, 0); 

	// Specifying address 
	sockaddr_in serverAddress; 
	serverAddress.sin_family = AF_INET; 
	serverAddress.sin_port = htons(8080); 
	serverAddress.sin_addr.s_addr = INADDR_ANY; 

	// Sending connection request 
	connect(clinetSocket, (struct sockaddr*) &serverAddress, sizeof(serverAddress)); 

	// Sending data 
	const char *message = "Hello, server!"; 
	send(clinetSocket, message, strlen(message), 0); 

	// Closing the socket 
	close(clinetSocket); 
	
	// Closing up 
	return 0; 
}