#include "Array.hpp"

int main(void)
{
    /* TEST 1, Empty Array */
    Array<int> empty;
    std::cout << "This should be 0, " << empty.size() <<  " If it isn't something's wrong" << std::endl;
    /* TEST 2, Array with Parameters */
    Array<int> param(5);
    for (size_t i = 0; i < param.size(); ++i)
    {
        std::cout << "This should be 0, " << param[i] <<  " If it isn't something's wrong (and this must be printed 5 times)" << std::endl;
    }
    /* TEST 3, Array with Values */
    Array<int> param2(10);
    param2[0] = 1;
    for (size_t j = 0; j < param2.size(); ++j)
    {
        param2[j] = j * 2;
        std::cout << "This should be " << j * 2 << ", " << param2[j] <<  std::endl;
    }
    /* TEST 4, Constant Array */
    const Array<int> constParam(5);
    for (size_t k = 0; k < constParam.size(); ++k)
    {
        std::cout << "This should be 0, " << constParam[k] <<  " If it isn't something's wrong (and this must be printed 5 times)" << std::endl;
    }
    /* TEST 5, Exception Handling */
    try
    {
        std::cout << "This should throw an exception, " << param2[11] <<  std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    /* TEST 6, Copy Constructor */
    Array<int> original(5);
    Array<int> copy(original);
    original[0] = 999;
    std::cout << "This should be 999, " << original[0] <<  std::endl;
    std::cout << "This should be 0, " << copy[0] <<  std::endl;
    /* TEST 7, Assignment Operator */
    Array<int> assigned(5);
    assigned = original;
    std::cout << "This should be 999, " << assigned[0] <<  std::endl;
    /* TEST 8, String Array */
    Array<std::string> stringArray(3);
    stringArray[0] = "Hello";
    stringArray[1] = "World";
    stringArray[2] = "!";
    for (size_t l = 0; l < stringArray.size(); ++l)
    {
        std::cout << "This should be " << stringArray[l] << ", " << stringArray[l] <<  std::endl;
    }
    return 0;
}