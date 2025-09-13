// Including the necessary header files 
#include <iostream>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <cstring>

// Running the main function 
int main() {
    // Create a socket
    int serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == -1) {
        std::cerr << "Failed to create socket." << std::endl;
        return -1;
    }

    // Prepare the sockaddr_in structure
    struct sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = INADDR_ANY;
    serverAddress.sin_port = htons(8080);

    // Bind
    if (bind(serverSocket, (struct sockaddr *)&serverAddress, sizeof(serverAddress)) < 0) {
        std::cerr << "Failed to bind." << std::endl;
        return -1;
    }

    // Listen
    listen(serverSocket, 3);

    std::cout << "Waiting for incoming connections..." << std::endl;

    // Accept incoming connection
    int clientSocket, addrLength;
    struct sockaddr_in clientAddress;
    addrLength = sizeof(struct sockaddr_in);
    clientSocket = accept(serverSocket, (struct sockaddr *)&clientAddress, (socklen_t *)&addrLength);
    if (clientSocket < 0) {
        std::cerr << "Failed to accept connection." << std::endl;
        return -1;
    }

    std::cout << "Connection accepted." << std::endl;

    // Send and receive data
    char message[1024] = {0};
    const char *response = "Server says: Hello, client!";
    int bytesRead = read(clientSocket, message, 1024);
    std::cout << "Client says: " << message << std::endl;
    write(clientSocket, response, strlen(response));

    // Close the sockets
    close(clientSocket);
    close(serverSocket);

    return 0;
}
