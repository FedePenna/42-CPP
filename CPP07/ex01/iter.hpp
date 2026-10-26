#pragma once
#include <iostream>
#include <string>

template <typename T, typename F>
void   iter(T *array, size_t length, F func)
{
    if (!array || length <
        = 0 || !func)
        return ;
    for (size_t i = 0; i < length; ++i)
        func(array[i]);
}
template <typename T>
void    print(const T &x)
{
    std::cout << x << std::endl;
}
template <typename T>
void    increment(T &x)
{
    ++x;
}

