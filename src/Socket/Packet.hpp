#pragma once

struct Packet {
    unsigned short Packet_Family = AF_PACKET;
    unsigned short Packet_Protocol = ETH_P_IP;
    int Interface_Index;
    unsigned short Hardware_Type;
    unsigned char Packet_Type;
    unsigned char Address_Length;
    unsigned char Address_Buffer[8];
};
