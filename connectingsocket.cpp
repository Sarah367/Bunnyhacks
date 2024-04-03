// Sarah Agnihotri
// komalagn2@csu.fullerton.edu
// March 31st, 2024

#include "connectingsocket.hpp"

// Constructor
HDE::connectingsocket::connectingsocket(int domain, int service, int protocol, int port, u_long interface)
    : simplesocket(domain, service, protocol, port, interface)
{
    set_connection(connect_to_network(get_sock(), get_address()));
    test_connection(get_connection());
}

int HDE::connectingsocket::connect_to_network(int sock, struct sockaddr_in address) 
{
    return connect(sock, (struct sockaddr *)&address,
        sizeof(address));
}