void disconnect_mDOS()
{
	closesocket(clientSocket);
    WSACleanup();
}
