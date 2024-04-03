// Sarah Agnihotri
// komalagn2@csu.fullerton.edu
// March 31st, 2024

#ifndef testserver_hpp
#define testserver_hpp

#include <stdio.h>

#include "simpleserver.hpp"

namespace HDE
{

class testserver: public simpleserver
{
private:
    char buffer[30000] = {0};
    int new_socket;
    
    void acceptor() override;
    void handler() override;
    void responder() override;
public:
    testserver();
    void launch() override;
};
}

#endif