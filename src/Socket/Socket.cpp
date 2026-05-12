#include "Socket.hpp"
#include "Packet.hpp"
#include <sys/socket.h>
#include <linux/if_packet.h>
#include <net/if.h>
#include <iostream>

int Create_Socket(){
int Socket = socket(AF_PACKET, SOCK_RAW, htons(ETH_P_IP));
    if (Socket < 0){
        std::cerr << "Failed to create Socket" << std::endl;
        return -1;
        }

Packet packet{};
packet.Packet_Protocol = htons(ETH_P_IP);
packet.Interface_Index = if_nametoindex("eth0");

if (bind(Socket, (struct sockaddr*)&packet, sizeof(packet)) < 0){
        std::cerr << "Failed to bind Socket" << std:: endl;
        return -1;
        }
        std::cout << "Socket created and bound!" << std::endl;
        return Socket;
}
