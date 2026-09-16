#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    Bureaucrat bureaucrat("John Burocrate", 32);
    bureaucrat.incrementGrade();
    Form contratto("Ercontratto", 30, 20);
    bureaucrat.signForm(contratto);
    bureaucrat.incrementGrade();
    bureaucrat.signForm(contratto);
    return 0;
}