// Sarah Agnihotri
// komalagn2@csu.fullerton.edu
// March 31st, 2024

#ifndef bindingsocket_hpp
#define bindingsocket_hpp

#include <stdio.h>

#include "simplesocket.hpp"

namespace HDE
{
class bindingsocket: public simplesocket
{
private:
    int binding;

    virtual void connect_to_network(int sock, struct sockaddr_in address);
public:
    // Constructor down below:
    bindingsocket(int domain, int service, int protocol, int port, u_long interface);
    
    // Accessor:
    int get_binding();
};

}

#endif