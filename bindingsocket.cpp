// Sarah Agnihotri
// komalagn2@csu.fullerton.edu
// March 31st, 2024

#include "bindingsocket.hpp"

// Constructor down below
HDE::bindingsocket::bindingsocket(int domain, int service, int protocol, int port, u_long interface)
    : simplesocket(domain, service, protocol, port, interface)
{
    connect_to_network(get_sock(), get_address());
    test_connection(binding);
}

// Defining the connect_to_network function (we are returning bind and the address is being passed by reference)
void HDE::bindingsocket::connect_to_network(int sock, struct sockaddr_in address)
{
    binding = bind(sock, (struct sockaddr *)& address,
        sizeof(address));
}

int HDE::bindingsocket::get_binding()
{
    return binding;
}