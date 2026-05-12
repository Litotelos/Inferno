#include "pch.hpp"
#include "Router.hpp"
#include "Socket.hpp"

void Start_Router(){
    std::cout << " Router starting"<< std::endl;

    int Socket = Create_Socket();
    if (Socket < 0) {
        std::cerr << "Failed to initialise Socket" << std::endl;
        return;
    }


    
}
