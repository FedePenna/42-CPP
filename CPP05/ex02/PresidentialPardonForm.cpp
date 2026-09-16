#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
    : AForm("Default Presidential Pardon Form", 25, 5), _target("Default Target")
{
    std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target)
    : AForm("Presidential Pardon Form", 25, 5), _target(target)
{
    std::cout << "Target PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
    : AForm(other), _target(other._target)
{
    std::cout << "Copy PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        AForm::operator=(other);
        // _target is const and cannot be assigned
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

void PresidentialPardonForm::executeAction(void) const
{
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}