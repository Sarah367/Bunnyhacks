// Sarah Agnihotri
// komalagn2@csu.fullerton.edu
// March 31st, 2024

#ifndef connectingsocket_hpp
#define connectingsocket_hpp

#include <stdio.h>

#include "simplesocket.hpp"

namespace HDE
{

class connectingsocket: public simplesocket
{
public:
    // Constructor down below
    connectingsocket(int domain, int service, int protocol, int port, u_long interface);
    virtual void connect_to_network(int sock, struct sockaddr_in address);
}; 
}
#endif