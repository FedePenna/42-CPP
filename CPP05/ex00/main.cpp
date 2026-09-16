#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat bureaucrat("John Burocrate", 151);
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade(); // This should throw an exception
        std::cout << bureaucrat << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat bureaucrat2("Jimmy Burocrate", 2);
        std::cout << bureaucrat2 << std::endl;
        bureaucrat2.incrementGrade();
        std::cout << bureaucrat2 << std::endl;
        bureaucrat2.incrementGrade(); // This should throw an exception
        std::cout << bureaucrat2 << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}