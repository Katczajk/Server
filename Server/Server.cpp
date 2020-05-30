#include <iostream>
#include "Server.h"

int main(int argc, char *argv[])
{
    /* std::cout << argv[1] << std::endl; */

    for ( ; ; )
    {
        run();

    } 
}

int run()
{
    std::system("notepad.exe");
    std::cout << "Server stoped or crashed - restarting ..." << std::endl;
    std::cout << "Press Control + C to interrupt !" << std::endl;
    std::system("ping -n 10 127.0.0.1 >> nul");
    return NULL;
}