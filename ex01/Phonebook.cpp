#include "Phonebook.hpp"
#include <iostream>   // per std::cout
#include <iomanip>    // per std::setw e std::right — ti servirà per formattare l'output
PhoneBook::PhoneBook() : _count(0), _oldest(0) {}

void PhoneBook::addContact(const Contact &contact)
{
    this->_contacts[this->_oldest] = contact;
    this->_oldest = (this->_oldest + 1) % 8;
    if (this->_count < 8)
        this->_count++;
}

void PhoneBook::searchContact() const
{
    if (this->_count == 0)
    {
        std::cout << "The phonebook is empty." << std::endl;
        return;
    }
    std::cout << "Index | First Name | Last Name  | Nickname" << std::endl;
    for (int i = 0; i < this->_count; i++)
    {
        std::cout << i + 1 << "     | "
                  << this->_contacts[i].getFirstName().substr(0, 10) << " | "
                  << this->_contacts[i].getLastName().substr(0, 10) << " | "
                  << this->_contacts[i].getNickname().substr(0, 10) << std::endl;
    }
}
