#pragma once
#include "AForm.hpp"

class Intern
{
  public:
	Intern(void);
	Intern(const Intern &other);
	Intern &operator=(const Intern &other);
	~Intern(void);
	AForm *makeForm(const std::string formName, const std::string target);

  private:
	AForm *createShrubberyCreationForm(const std::string target);
	AForm *createRobotomyRequestForm(const std::string target);
	AForm *createPresidentialPardonForm(const std::string target);
};