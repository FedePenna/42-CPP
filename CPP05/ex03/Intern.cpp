#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
    std::cout << "Default Intern constructor called" << std::endl;
}

Intern::Intern(const Intern& other)
{
    std::cout << "Copy Intern constructor called" << std::endl;
    *this = other;
}

Intern &Intern::operator=(const Intern &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    (void)other; // Avoid unused parameter warning
    return *this;
}

AForm *Intern::createShrubberyCreationForm(const std::string target)
{
    return new ShrubberyCreationForm(target);
}

AForm *Intern::createRobotomyRequestForm(const std::string target)
{
    return new RobotomyRequestForm(target);
}

AForm *Intern::createPresidentialPardonForm(const std::string target)
{
    return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(const std::string formName, const std::string target)
{
    std::string formNames[] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };

    AForm *(Intern::*formCreators[])(const std::string) = {
        &Intern::createShrubberyCreationForm,
        &Intern::createRobotomyRequestForm,
        &Intern::createPresidentialPardonForm
    };

    for (int i = 0; i < 3; i++)
    {
        if (formName == formNames[i])
        {
            std::cout << "Intern creates " << formName << " form." << std::endl;
            return (this->*formCreators[i])(target);
        }
    }

    std::cout << "Error: Unknown form name '" << formName << "'." << std::endl;
    return NULL;
}

Intern::~Intern(void)
{
    std::cout << "Intern Destructor called" << std::endl;
}



