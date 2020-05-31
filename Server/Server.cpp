#include <iostream>
#include "Server.h"

int main(int argc, char *argv[])
{
    /* std::cout << argv[1] << std::endl; */

    /* loop here until control + c */
    /* rewrite code for using on linux, first testrun control+c dont work correctly */
    for ( ; ; )
    {
        run();

    } 
}

int run()
{
    /* game server steps here */
    std::system("notepad.exe");
    /* message for interrupt */
    std::cout << "Server stoped or crashed - restarting ..." << std::endl;
    std::cout << "Press Control + C to interrupt !" << std::endl;
    /* simple wait step */
    std::system("ping -n 10 127.0.0.1 >> nul");
    return NULL;
}