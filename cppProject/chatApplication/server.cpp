#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>

int main() {
    int serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    // ... (Error checking for socket creation)
    
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(3665);
    serverAddress.sin_addr.s_addr = INADDR_ANY;

    // ... (Error checking for bind and listen)
    bind(serverSocket, (struct sockaddr*) &serverAddress, sizeof(serverAddress));
    listen(serverSocket, 5);
    
    std::cout << "Server is ready. Waiting for clients..." << std::endl;
    
    std::vector<int> clientSockets;
    int maxConnections = 2; // Limiting to 2 for this example
    
    while (clientSockets.size() < maxConnections) {
        int clientSocket = accept(serverSocket, nullptr, nullptr);
        if (clientSocket != -1) {
            clientSockets.push_back(clientSocket);
            std::cout << "Client " << clientSockets.size() << " connected!" << std::endl;
        }
    }
    
    std::cout << "Starting chat..." << std::endl;
    
    char buffer[1024];
    while (true) {
        for (int socket : clientSockets) {
            memset(buffer, 0, sizeof(buffer));
            int bytesReceived = recv(socket, buffer, sizeof(buffer), 0);
            
            if (bytesReceived > 0) {
                std::string message(buffer, bytesReceived);
                std::cout << "Received from client " << socket << ": " << message << std::endl;
                
                // Broadcast the message to all other clients
                for (int otherSocket : clientSockets) {
                    if (otherSocket != socket) {
                        send(otherSocket, buffer, bytesReceived, 0);
                    }
                }
            } else if (bytesReceived == 0) {
                // Client disconnected
                std::cout << "Client " << socket << " disconnected." << std::endl;
                // You would typically remove this socket from the vector
                close(socket);
            }
        }
    }
    
    close(serverSocket);
    return 0;
}