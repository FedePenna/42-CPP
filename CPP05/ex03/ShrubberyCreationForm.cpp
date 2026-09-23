#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
    : AForm("Default Shrubbery Creation Form", 145, 137), _target("Default Target")
{
    std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target)
    : AForm("Shrubbery Creation Form", 145, 137), _target(target)
{
    std::cout << "Target ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
    : AForm(other), _target(other._target)
{
    std::cout << "Copy ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        AForm::operator=(other);
        // _target is const and cannot be assigned
    }
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm Destructor called" << std::endl;
}

void ShrubberyCreationForm::executeAction(void) const
{
    std::ofstream outfile((_target + "_shrubbery").c_str());
    if (!outfile)
    {
        std::cerr << "Error: Could not create file " << _target + "_shrubbery" << std::endl;
        return;
    }

    outfile << "       _-_" << std::endl;
    outfile << "    /~~   ~~\\" << std::endl;
    outfile << " /~~         ~~\\" << std::endl;
    outfile << "{               }" << std::endl;
    outfile << " \\  _-     -_  /" << std::endl;
    outfile << "   ~  \\\\ //  ~" << std::endl;
    outfile << "_- -   | | _- _" << std::endl;
    outfile << "  _ -  | |   -_" << std::endl;
    outfile << "      // \\\\" << std::endl;

    outfile.close();
}