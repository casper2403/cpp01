#include "../includes/Zombie.hpp"

int main()
{
	Zombie first;

	first.setName("firstZombie");
	first.announce();

	Zombie *second = newZombie("secondZombie");
	second->announce();
	delete second;

	randomChump("thirdZombie");
}
