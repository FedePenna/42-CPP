#pragma once
#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
    private:
        const std::string _target;
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm(const RobotomyRequestForm& other);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
        ~RobotomyRequestForm();
        void executeAction(void) const;
};