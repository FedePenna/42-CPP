#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <ctime>

int main(void)
{
    srand(time(NULL));
    Intern someRandomIntern;
    Bureaucrat highRanker("HighRanker", 1);
    AForm *form1 = someRandomIntern.makeForm("shrubbery creation", "home");
    AForm *form2 = someRandomIntern.makeForm("robotomy request", "Bender");
    AForm *form3 = someRandomIntern.makeForm("presidential pardon", "Fry");
    AForm *form4 = someRandomIntern.makeForm("unknown form", "target");

    form1->beSigned(highRanker);
    form1->execute(highRanker);
    form2->beSigned(highRanker);
    form2->execute(highRanker);
    form3->beSigned(highRanker);
    form3->execute(highRanker);
    if (form4)
    {

        form4->beSigned(Bureaucrat("Dave", 1));
        form4->execute(Bureaucrat("Dave", 1));
        delete form4;

    }
    delete form1;
    delete form2;
    delete form3;
}