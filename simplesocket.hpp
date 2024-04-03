// Sarah Agnihotri
// komalagn2@csu.fullerton.edu
// March 31st, 2024

#ifndef simplesocket_hpp
#define simplesocket_hpp

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <iostream>

namespace HDE
{
class simplesocket 
{
private:
    int sock;
    struct sockaddr_in address;    
    //int connection;
public:
    simplesocket(int domain, int service, int protocol, int port, u_long interface);
    // Virtual function (connects to the network)
    virtual void connect_to_network(int sock, struct sockaddr_in address) = 0;
    // Does the connection actually work? :
    void test_connection(int);
    // Accessor functions: 
    //struct sockaddr_in get_address();
    int get_sock();
    struct sockaddr_in get_address();
    //int get_connection();
    // Setter functions
    //void set_connection(int const);
};
}

#endif