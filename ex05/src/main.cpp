#include "../includes/Harl.hpp"
#include <iostream>

int main()
{
    Harl harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    std::cout << "Testing with an invalid level:" << std::endl;
    harl.complain("CRITICAL");
    return 0;
}
