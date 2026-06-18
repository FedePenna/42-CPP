#include "Contact.hpp"
#include "Phonebook.hpp"

int main()
{
    Phonebook phonebook;
    while (true)
    {
        std::string command;
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if (command == "ADD")
        {
            phonebook.create_contact();
        }
        else if (command == "SEARCH")
        {
            phonebook.search_contacts();
        }
        else if (command == "EXIT")
        {
            std::cout << "Exiting phonebook application. Goodbye!" << std::endl;
            break;
        }
        else
        {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }

    return 0;
}