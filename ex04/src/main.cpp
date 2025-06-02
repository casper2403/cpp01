#include <iostream>
#include <string>
#include "../includes/Replacer.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl;
        return 1;
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    Replacer replacer(filename, s1, s2);
    if (!replacer.replace())
    {
        return 1;
    }

    std::cout << "Successfully created " << filename << ".replace" << std::endl;
    return 0;
}
