#include "iter.hpp"

int main(void)
{
    int array[]={1, 2, 3, 4, 5};
    char arrayc[]={'a', 'b', 'c', 'd', 'e'};
    size_t length = sizeof(array) / sizeof(array[0]);
    size_t lengthc = sizeof(arrayc) / sizeof(arrayc[0]);
    iter(array, length, print<const int>);
    iter(arrayc, lengthc, print<const char>);
    iter(array, length, increment<int>);
    std::cout << "After incrementing the integer array:" << std::endl;
    iter(array, length, print<const int>);
}