#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>

int main(void)
{
    srand(time(NULL));
    Bureaucrat bureaucrat("John Burocrate", 5);
    Bureaucrat bureaucrat2("Jimmy Burocrate", 72);
    Bureaucrat bureaucrat3("Johan Burocrate", 146);
    ShrubberyCreationForm shrubberyForm("Home");
    RobotomyRequestForm robotomyForm("Bender");
    PresidentialPardonForm pardonForm("Marvin");
    bureaucrat3.signForm(shrubberyForm);
    bureaucrat2.signForm(robotomyForm);
    bureaucrat.signForm(pardonForm);
    bureaucrat2.decrementGrade();
    bureaucrat3.incrementGrade();
    bureaucrat2.signForm(robotomyForm);
    bureaucrat3.signForm(shrubberyForm);
    bureaucrat3.executeForm(shrubberyForm);
    bureaucrat2.executeForm(robotomyForm);
    bureaucrat.executeForm(pardonForm);
    return 0;
}