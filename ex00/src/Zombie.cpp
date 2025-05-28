#include "../includes/Zombie.hpp"
#include <iostream>
#include <ostream>

Zombie::Zombie(){}

Zombie::~Zombie()
{
	std::cout << "[DESTRUCTOR]  " << this->name << std::endl;
}

void Zombie::announce (void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName() const
{
	return this->name;
}

void Zombie::setName(std::string newName)
{
	this->name = newName;
}
