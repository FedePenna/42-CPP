#pragma once
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        const std::string _target;
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(const std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm& other);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
        ~ShrubberyCreationForm();
        void executeAction(void) const;
};