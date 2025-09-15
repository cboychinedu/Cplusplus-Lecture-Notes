#include <iostream>
#include <string>
#include <cstring>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <thread>

// Function to handle receiving messages
void receive_thread(int clientSocket) {
    char buffer[1024];
    while (true) {
        memset(buffer, 0, sizeof(buffer));
        int bytes_received = recv(clientSocket, buffer, sizeof(buffer), 0);

        if (bytes_received <= 0) {
            std::cout << "Server disconnected." << std::endl;
            break;
        }
        std::cout << "\nFriend: " << std::string(buffer, bytes_received) << std::endl;
        std::cout << "You: ";
    }
}

int main() {
    int clientSocket = socket(AF_INET, SOCK_STREAM, 0);
    // ... (rest of socket setup and connect() call) ...
    
    sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(3665);
    inet_pton(AF_INET, "127.0.0.1", &serverAddress.sin_addr);

    if (connect(clientSocket, (struct sockaddr*) &serverAddress, sizeof(serverAddress)) == -1) {
        std::cerr << "Error connecting to server" << std::endl;
        close(clientSocket);
        return -1;
    }

    std::cout << "Connected to the chat. Type 'quit' to exit." << std::endl;

    // Start a separate thread for receiving messages
    std::thread receiver(receive_thread, clientSocket);

    std::string userMessage;
    while (true) {
        std::cout << "You: ";
        std::getline(std::cin, userMessage);

        if (userMessage == "quit") {
            break;
        }
        send(clientSocket, userMessage.c_str(), userMessage.length(), 0);
    }
    
    // Clean up
    receiver.join(); // Wait for the receiver thread to finish
    close(clientSocket);
    return 0;
}