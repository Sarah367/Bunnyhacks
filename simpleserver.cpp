// Sarah Agnihotri
// komalagn2@csu.fullerton.edu
// March 31st, 2024

#include "simpleserver.hpp"

HDE::simpleserver::simpleserver(int domain, int service, int protocol, int port, u_long interface, int bklg)
{
    // memory leak
    socket = new listeningsocket(domain, service, protocol, port, interface, bklg);
    // delete socket;
    // socket = new listeningsocket();
    // you delete the socket so that the socket doesn't point to both of them at the same time (since you now have created two addresses in memory)
}

HDE::listeningsocket * HDE::simpleserver::get_socket()
{
    return socket;
}