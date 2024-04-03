// Sarah Agnihotri
// komalagn2@csu.fullerton.edu
// March 31st, 2024

#ifndef listeningsocket_hpp
#define listeningsocket_hpp

#include <stdio.h>

#include "bindingsocket.hpp"

namespace HDE
{

class listeningsocket: public bindingsocket
{
private:
    int backlog;
    int listening;
public:
    listeningsocket(int domain, int service, int protocol, int port, u_long interface, int bklg);
    void start_listening();
    int get_listening();
    int get_backlog();
};

}

#endif