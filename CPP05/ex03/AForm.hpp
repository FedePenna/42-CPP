#pragma once
#include <iostream>
#include <string>
#include <ostream>
#include <fstream>

class Bureaucrat;

class AForm
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;
    
    public:
        AForm(const std::string name, int gradeToSign, int gradeToExecute);
        AForm(const AForm& other);
        AForm &operator=(const AForm &other);
        virtual ~AForm();
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
    class FormNotSignedException : public std::exception
    {
        public:
            const char *what() const throw()
            {
                return "Form is not signed!";
            }
    };
    int getGradeToSign(void) const;
    int getGradeToExecute(void) const;
    std::string getName(void) const;
    bool getIsSigned(void) const;
    void beSigned(const Bureaucrat& bureaucrat);
    void execute(const Bureaucrat& executor) const;
    virtual void executeAction(void) const = 0;
};
std::ostream &operator<<(std::ostream &out, const AForm &form);



