// Sarah Agnihotri
// komalagn2@csu.fullerton.edu
// March 31st, 2024

#ifndef simpleserver_hpp
#define simpleserver_hpp

#include <stdio.h>
#include <unistd.h>

#include "hdelibc-networking.hpp" // might have potential problem when compiling?

namespace HDE
{

class simpleserver
{
private:
    listeningsocket * socket;
    virtual void acceptor() = 0;
    virtual void handler() = 0;
    virtual void responder() = 0;
public:
    simpleserver(int domain, int service, int protocol, int port, u_long interface, int bklg);
    virtual void launch() = 0;
    listeningsocket * get_socket();
};

}

#endif