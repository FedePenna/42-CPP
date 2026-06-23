/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepennar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 17:54:09 by fepennar          #+#    #+#             */
/*   Updated: 2026/06/18 17:54:11 by fepennar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
    contact_count = 0;
}

void Phonebook::add_contact(Contact contact)
{
    if (contact_count < 8)
    {
        contacts[contact_count] = contact;
        contact_count++;
    }
    else
    {
        for (int i = 1; i < 8; i++)
        {
            contacts[i - 1] = contacts[i];
        }
        contacts[7] = contact;
    }
}
std::string Phonebook::truncate(std::string str)
{
    if (str.length() > 10)
    {
        return (str.substr(0, 9) + ".");
    }
    else
    {
        return (str);
    }
}

void Phonebook::search_contacts()
{
    if (contact_count == 0)
    {
        std::cout << "Phonebook is empty. No contacts to display." << std::endl;
        return;
    }
    std::cout << std::right << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < contact_count; i++)
    {
        std::cout << std::right << std::setw(10) << i + 1 << "|" 
                  << std::setw(10) << truncate(contacts[i].get_first_name()) << "|" 
                  << std::setw(10) << truncate(contacts[i].get_last_name()) << "|" 
                  << std::setw(10) << truncate(contacts[i].get_nickname()) << std::endl;
    }
    std::cout << "Enter the index of the contact to view details: ";
    std::string input;
    std::getline(std::cin, input);
    int index = std::atoi(input.c_str());
    if (index < 1 || index > contact_count)
    {
        std::cout << "Invalid index. Returning to main menu." << std::endl;
        return;
    }
    Contact selected_contact = contacts[index - 1];
    std::cout << "First Name: " << selected_contact.get_first_name() << std::endl;
    std::cout << "Last Name: " << selected_contact.get_last_name() << std::endl;
    std::cout << "Nickname: " << selected_contact.get_nickname() << std::endl;
    std::cout << "Phone Number: " << selected_contact.get_phone_number() << std::endl;
    std::cout << "Darkest Secret: " << selected_contact.get_darkest_secret() << std::endl;
}

void Phonebook::create_contact()
{
    Contact new_contact;
    std::string input;

    std::cout << "Enter first name: ";
    std::getline(std::cin, input);
    if (input.empty() or input.find_first_not_of(" \t\n\v\f\r") == std::string::npos)
    {
        std::cout << "First name cannot be empty. Contact creation aborted." << std::endl;
        return ;
    }
    new_contact.set_first_name(input);
    std::cout << "Enter last name: ";
    std::getline(std::cin, input);
    if (input.empty() or input.find_first_not_of(" \t\n\v\f\r") == std::string::npos)
    {
        std::cout << "Last name cannot be empty. Contact creation aborted." << std::endl;
        return;
    }
    new_contact.set_last_name(input);
    std::cout << "Enter nickname: ";
    std::getline(std::cin, input);
    if (input.empty() or input.find_first_not_of(" \t\n\v\f\r") == std::string::npos)
    {
        std::cout << "Nickname cannot be empty. Contact creation aborted." << std::endl;
        return;
    }
    new_contact.set_nickname(input);

    std::cout << "Enter phone number: ";
    std::getline(std::cin, input);
    if (input.empty() || input.find_first_not_of("0123456789") != std::string::npos)
    {
        std::cout << "Phone number cannot be empty and must contain only digits. Contact creation aborted." << std::endl;
        return;
    }
    new_contact.set_phone_number(input);

    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, input);
    if (input.empty())
    {
        std::cout << "Darkest secret cannot be empty. Contact creation aborted." << std::endl;
        return;
    }
    new_contact.set_darkest_secret(input);

    add_contact(new_contact);
}
