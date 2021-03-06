#include <vector>
#include <string>
#include <string.h>
#include <stdlib.h>

#include "../include/utils/udpClientServer.hpp"

void sendPing (udp_client_server::udp_client& client);

void sendPing (udp_client_server::udp_client& client)
{
    std::string msg = "#";
    printf("Sent Data: %s\n", msg.c_str());
	client.send(msg.c_str(), strlen(msg.c_str()));
}

int main ()
{
    std::string addr = "localhost";
    int port = 5810;
    udp_client_server::udp_client client (addr, port);
    sendPing(client);
    return 0;
}
