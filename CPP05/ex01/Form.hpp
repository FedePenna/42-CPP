#pragma once
#include <iostream>
#include <string>
#include <ostream>

class Bureaucrat;

class Form
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;
    
    public:
        Form(void);
        Form(const std::string name, int gradeToSign, int gradeToExecute);
        Form(const Form& other);
        Form &operator=(const Form &other);
        ~Form();
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
    int getGradeToSign(void) const;
    int getGradeToExecute(void) const;
    std::string getName(void) const;
    bool getIsSigned(void) const;
    void beSigned(const Bureaucrat& bureaucrat);
};
std::ostream &operator<<(std::ostream &out, const Form &form);



