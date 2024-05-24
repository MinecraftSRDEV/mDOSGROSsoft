#define localhost "127.0.0.1"
#define default_port 12345

WSADATA wsaData;
SOCKET clientSocket;
sockaddr_in serverAddr;

char buffer[1024];
const char* message = "callFunction";
int bytesReceived;
