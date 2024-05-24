void load_api(std::string mDOS_adress, int mDOS_port)
{
	WSAStartup(MAKEWORD(2, 2), &wsaData);

    clientSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (clientSocket == INVALID_SOCKET) {
        std::cerr << "<mDOS API>: INVALID SOCKET " << WSAGetLastError() << std::endl;
        WSACleanup();
    }
    
    serverAddr.sin_family = AF_INET;
    serverAddr.sin_addr.s_addr = inet_addr(mDOS_adress.c_str()); // Adres loopback
    serverAddr.sin_port = htons(mDOS_port);
    
    if (connect(clientSocket, (sockaddr*)&serverAddr, sizeof(serverAddr)) == SOCKET_ERROR) {
        std::cerr << "<mDOS API>: Can't connect to mDOS, error: " << WSAGetLastError() << std::endl;
        closesocket(clientSocket);
        WSACleanup();
    }
}
