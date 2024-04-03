// Sarah Agnihotri
// komalagn2@csu.fullerton.edu
// March 31st, 2024

#include "listeningsocket.hpp"

// Constructors down below
HDE::listeningsocket::listeningsocket(int domain, int service, int protocol, int port, u_long interface, int bklg)
    : bindingsocket(domain, service, protocol, port, interface)
{
    backlog = bklg;
    start_listening();
    test_connection(listening);
}

void HDE::listeningsocket::start_listening()
{
    listening = listen(get_sock(), backlog);
}

// Accessors:
int HDE::listeningsocket::get_listening()
{
    return listening;
}

int HDE::listeningsocket::get_backlog()
{
    return backlog;
}