#include "../includes/Zombie.hpp"
#include <string>

int main()
{
	Zombie *horde = zombieHorde(10, "name");

	for (int i = 0; i < 10; i++)
		horde[i].announce();

	delete[] horde;
}
