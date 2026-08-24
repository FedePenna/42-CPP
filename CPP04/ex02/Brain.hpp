#pragma once
#include "Animal.hpp"

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(const Brain& other);
        Brain &operator=(const Brain &other);
        ~Brain();

        std::string getIdea(int index) const;
        void setIdea(int index, const std::string &idea);
};