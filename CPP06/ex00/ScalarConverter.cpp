#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
    std::cout << "Default ScalarConverter constructor called" << std::endl;

}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
    std::cout << "ScalarConverter copy constructor called" << std::endl;
    *this = other;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    std::cout <<"ScalarConverter copy assignment operator called" << std::endl;
    (void)other; // Suppress unused parameter warning
    return *this;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter destructor called" << std::endl;
}

void ScalarConverter::convert(const std::string& literal)
{
    if (literal.empty())
    {
        std::cerr << "Error: Empty literal provided." << std::endl;
        return;
    }
    if (literal.length() == 1 && !std::isdigit(literal[0]))
    {
        char c = literal[0];
        std::cout << "char: '" << c << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
        return;
    }
    else
    {
        int i = 0;
        bool IsInt = true;
        if (literal[0] == '+' || literal[0] == '-')
            i++;
        
    }
    
    
}