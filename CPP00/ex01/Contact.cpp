/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepennar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 17:53:46 by fepennar          #+#    #+#             */
/*   Updated: 2026/06/18 17:53:51 by fepennar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	first_name = "";
	last_name = "";
	nickname = "";
	phone_number = "";
	darkest_secret = "";
}

Contact::~Contact()
{}

void Contact::set_first_name(std::string str)
{
	this->first_name = str;
}
void Contact::set_last_name(std::string str)
{
	this->last_name = str;
}

void Contact::set_nickname(std::string str)
{
	this->nickname = str;
}
void Contact::set_phone_number(std::string str)
{
	this->phone_number = str;
}
void Contact::set_darkest_secret(std::string str)
{
	this->darkest_secret = str;
}

std::string Contact::get_first_name()
{
	return (this->first_name);
}
std::string Contact::get_last_name()
{
	return (this->last_name);
}
std::string Contact::get_nickname()
{
	return (this->nickname);
}
std::string Contact::get_phone_number()
{
	return (this->phone_number);
}
std::string Contact::get_darkest_secret()
{
    return (this->darkest_secret);
}
