#include <iostream>
#include <ostream>
#include <string>

class Bureaucrat
{
    private:
        std::string _name;
        int _grade;
    public:
        Bureaucrat(void);
        Bureaucrat(const std::string name, unsigned int grade);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat();
    class GradeTooHighException : public std::exception
    {
        public:
            const char *what() const throw()
            {
                return "Grade is too high!";
            }
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char *what() const throw()
            {
                return "Grade is too low!";
            }
    };
    std::string getName(void) const;
    unsigned int getGrade(void) const;
    void incrementGrade(void);
    void decrementGrade(void);

};
std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);