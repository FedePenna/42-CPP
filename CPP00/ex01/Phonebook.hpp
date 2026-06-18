/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fepennar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/18 17:54:17 by fepennar          #+#    #+#             */
/*   Updated: 2026/06/18 17:54:18 by fepennar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
class Phonebook
{
  private:
	Contact contacts[8];
	int contact_count;
	std::string truncate(std::string str);
  public:
	Phonebook();
	void create_contact();
	void add_contact(Contact contact);
	void search_contacts();
};
#endif
