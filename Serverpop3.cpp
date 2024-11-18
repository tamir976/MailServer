#include "process.h"
using namespace std;

sem_t mutex;

class connectServer {
public:
	connectServer();
	void threadHandler();
private:
	char ip4[INET_ADDRSTRLEN];
	socklen_t len;
	int server_socket, client_socket, recvData, * thread_sock;
	struct sockaddr_in, server_address, client_address;
};

int main(int argc, char const* argv[]) {
	sem_init(&mutex, 0, 1);
	connectServer server;
}