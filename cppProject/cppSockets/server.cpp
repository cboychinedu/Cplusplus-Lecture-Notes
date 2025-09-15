// Including the header files 
#include <iostream>
#include <string>
#include <cstring>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>


// Running the main function 
int main(int args, char** argv) {
	// Creating a socket 
	int serverSocket = socket(AF_INET, SOCK_STREAM, 0); 

	// Specifying the address 
	sockaddr_in serverAddress; 
	serverAddress.sin_family = AF_INET; 
	serverAddress.sin_port = htons(8080); 
	serverAddress.sin_addr.s_addr = INADDR_ANY; 

	// Binding the socket 
	bind(serverSocket, (struct sockaddr*) &serverAddress, sizeof(serverAddress)); 

	// Listening to the assigned socket 
	listen(serverSocket, 5); 

	// Accepting the connection request 
	int clientSocket = accept(serverSocket, nullptr, nullptr); 

	// Receiving the data 
	char buffer[1024] = { 0 }; 
	recv(clientSocket, buffer, sizeof(buffer), 0); 

	// Displaying the message from the client 
	std::cout << "Message from client: " << buffer << std::endl; 

	// Closing the socket 
	close(serverSocket); 

	// closing up 
	return 0; 
}