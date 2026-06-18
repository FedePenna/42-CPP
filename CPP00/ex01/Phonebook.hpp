#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
class Phonebook
{
  private:
	Contact contacts[8];
	int contact_count;

  public:
	Phonebook();
	std::string truncate(std::string str);
	void create_contact();
	void add_contact(Contact contact);
	void search_contacts();
};
#endif