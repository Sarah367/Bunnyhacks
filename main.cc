// Sarah Agnihotri
// komalagn2@csu.fullerton.edu
// March 31st, 2024

#include <iostream>
#include "listeningsocket.hpp"
using namespace std;

int main() 
{
    std::cout << "Starting..." << std::endl;

    std::cout << "binding socket..." << std::endl;
    HDE::bindingsocket bs = HDE::bindingsocket(AF_INET, SOCK_STREAM, 0, 81, INADDR_ANY);

    std::cout << "listening socket..." << std::endl;
    HDE::listeningsocket ls = HDE::listeningsocket(AF_INET, SOCK_STREAM, 0, 80, INADDR_ANY, 10);
    std::cout << "Success!" << std::endl;
}