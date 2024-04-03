// Sarah Agnihotri
// komalagn2@csu.fullerton.edu
// March 31st, 2024

#include "testserver.hpp"
#include <iostream>
#include <cstring>

HDE::testserver::testserver() : simpleserver(AF_INET, SOCK_STREAM, 0, 3001, INADDR_ANY, 10)
{
    launch();
}

void HDE::testserver::acceptor()
{
    struct sockaddr_in address = get_socket()->get_address();
    int addrlen = sizeof(address);
    new_socket = accept(get_socket()->get_sock(), (struct sockaddr *)&address, (socklen_t*)&addrlen);
    read(new_socket, buffer, 30000);
}

void HDE::testserver::handler()
{
    std::cout << buffer << std::endl;
}

void HDE::testserver::responder()
{
    const char *hello = "Hello from server";
    write(new_socket, hello, strlen(hello));
    close(new_socket);
}

void HDE::testserver::launch()
{
    while (true)
    {
        std::cout << "===== WAITING =====" << std::endl;
        acceptor();
        handler();
        responder();
        std::cout << "===== DONE =====" << std::endl;
    }
}