#pragma once
#include <iostream>
#include <string>
#include <stdexcept>

template <typename T>
class Array
{
    private:
        size_t m_size;
        T *  m_data;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& other);
        Array& operator=(const Array &other);
        ~Array();

        unsigned int size() const;
        
        const T& operator[](unsigned int i) const; //I need both const and non const because i need to be able to read and write non const, but also being able to read only the const operator
        T& operator[](unsigned int i);
};

# include "Array.tpp"