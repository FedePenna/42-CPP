#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
    : AForm("Default Robotomy Request Form", 72, 45), _target("Default Target")
{
    std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target)
    : AForm("Robotomy Request Form", 72, 45), _target(target)
{
    std::cout << "Target RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
    : AForm(other), _target(other._target)
{
    std::cout << "Copy RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        AForm::operator=(other);
        // _target is const and cannot be assigned
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

void RobotomyRequestForm::executeAction(void) const
{
    std::cout << "Bzzzzzz... Drilling noises..." << std::endl;
    if (rand() % 2 == 0)
        std::cout << _target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy failed on " << _target << "." << std::endl;
}