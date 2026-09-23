#pragma once
#include <iostream>
#include <string>
#include <cmath>

class ScalarConverter
{
    public:
        static void convert(const std::string& literal);
    private:
        ScalarConverter(void);
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter &operator=(const ScalarConverter &other);
        ~ScalarConverter();

};