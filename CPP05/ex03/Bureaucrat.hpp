#pragma once
#include <iostream>
#include <ostream>
#include <string>

class AForm;

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;
    public:
        Bureaucrat(void);
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat();
    class GradeTooHighException : public std::exception
    {
        public:
            const char *what() const throw()
            {
                return "Grade is too high!";
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const throw()
            {
                return "Grade is too low!";
            }
    };
    std::string getName(void) const;
    int getGrade(void) const;
    void incrementGrade(void);
    void decrementGrade(void);
    void signForm(AForm &form) const;
    void executeForm(const AForm &form) const;
};
std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);