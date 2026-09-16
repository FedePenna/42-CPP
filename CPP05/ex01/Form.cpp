#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void)
    : _name("Default Form"), _isSigned(false), _gradeToSign(1), _gradeToExecute(1)
{
    std::cout << "Default constructor called" << std::endl;
}

Form::Form(const std::string name, int gradeToSign, int gradeToExecute)
    : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    std::cout << "Name/Grade constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

// Copy constructor
Form::Form(const Form &other)
    : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
    std::cout << "Copy constructor called" << std::endl;
}


// Assignment operator overload
Form &Form::operator=(const Form &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_isSigned = other._isSigned;
        // _name, _gradeToSign, and _gradeToExecute are const and cannot be assigned
    }
    return *this;
}

// Destructor
Form::~Form(void)
{
    std::cout << "Form Destructor called" << std::endl;
    return ;
}

int Form::getGradeToSign(void) const
{
    return this->_gradeToSign;
}

int Form::getGradeToExecute(void) const
{
    return this->_gradeToExecute;
}

std::string Form::getName(void) const
{
    return this->_name;
}

bool Form::getIsSigned(void) const
{
    return this->_isSigned;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw Form::GradeTooLowException();
    this->_isSigned = true;
}
std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "Form Name: " << form.getName() << ", Signed: " << (form.getIsSigned() ? "Yes" : "No") 
        << ", Grade to Sign: " << form.getGradeToSign() 
        << ", Grade to Execute: " << form.getGradeToExecute();
    return out;
}
