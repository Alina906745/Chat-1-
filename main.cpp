#include "main.h"

#include "user.h"
#include "message.h"
#include "server.h"

int main()
{
    std::cout << "Welcome to server 0.1!" << std::endl;
    std::string server_name;
    std::cout << "Enter server name: ";
    std::getline(std::cin, server_name);

    std::string& name = server_name; 
    Server server(name);
    server.start();

    std::cout << "type /help to see the list of commands" << std::endl;

    while (server.ifWorks())
    {
        server.processMessage();
    }

    return 0;
}