#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat bureaucrat("John Burocrate", 200);
        std::cout << bureaucrat << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}