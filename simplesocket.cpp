// Sarah Agnihotri
// komalagn2@csu.fullerton.edu
// March 31st, 2024

#include "simplesocket.hpp"

HDE::simplesocket::simplesocket(int domain, int service, int protocol, int port, u_long interface)
{
    // Defined our address structure down BELOW:
    address.sin_family = domain;
    address.sin_port = htons(port);
    address.sin_addr.s_addr = htonl(interface);
    // We are establishing our connection:
    sock = socket(domain, service, protocol);
    test_connection(sock);
}

// Test connection virtual function

void HDE::simplesocket::test_connection(int item_to_test)
{
    // Confirms that the socket has connected properly (other it will say that it has failed to connect!)
    if (item_to_test < 0) 
    {
        perror("Failed to connect...");
        exit(EXIT_FAILURE);
    }
}

// ACCESSOR FUNCTIONS!

struct sockaddr_in HDE::simplesocket::get_address()
{
    return address;
}

int HDE::simplesocket::get_sock()
{
    return sock;
}
/*
int HDE::simplesocket::get_connection()
{
    return connect;
} */

// Setter functions
/*
void HDE::simplesocket::set_connection(int con)
{
    connect = con;
} */