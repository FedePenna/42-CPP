#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Error: wrong number of arguments" << std::endl;
        return (1);
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::ifstream inputFile(filename.c_str());
    if (!inputFile.is_open())
    {
        std::cout << "Error: could not open file " << filename << std::endl;
        return (1);
    }
    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile.is_open())
    {
        std::cout << "Error creating output file!" << std::endl;
        return (1);
    }
    std::stringstream buffer;
    buffer << inputFile.rdbuf();
    std::string content = buffer.str();
    if (s1.empty())
    {
        outfile << content;
        return (0);
    }
    for (size_t pos = 0; pos < content.length(); pos++)
    {
        if (content.compare(pos, s1.length(), s1) == 0)
        {
            pos += s1.length() - 1;
            outfile << s2;
        }
        else
        {
            outfile << content[pos];
        }
    }
    return (0);
}