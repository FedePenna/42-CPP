#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(const std::string name, int gradeToSign, int gradeToExecute)
    : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    std::cout << "Name/Grade constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    else if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

// Copy constructor
AForm::AForm(const AForm &other)
    : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute)
{
    std::cout << "Copy constructor called" << std::endl;
}


// Assignment operator overload
AForm &AForm::operator=(const AForm &other)
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
AForm::~AForm(void)
{
    std::cout << "AForm Destructor called" << std::endl;
    return ;
}

int AForm::getGradeToSign(void) const
{
    return this->_gradeToSign;
}

int AForm::getGradeToExecute(void) const
{
    return this->_gradeToExecute;
}

std::string AForm::getName(void) const
{
    return this->_name;
}

bool AForm::getIsSigned(void) const
{
    return this->_isSigned;
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw AForm::GradeTooLowException();
    this->_isSigned = true;
}

void AForm::execute(const Bureaucrat& executor) const
{
    if (!this->_isSigned)
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->_gradeToExecute)
        throw AForm::GradeTooLowException();
    this->executeAction();
}


std::ostream &operator<<(std::ostream &out, const AForm &form)
{
    out << "Form Name: " << form.getName() << ", Signed: " << (form.getIsSigned() ? "Yes" : "No") 
        << ", Grade to Sign: " << form.getGradeToSign() 
        << ", Grade to Execute: " << form.getGradeToExecute();
    return out;
}
