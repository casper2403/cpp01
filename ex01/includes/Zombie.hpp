#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
public:
	Zombie();
	~Zombie();
	
	void announce(void);

	// Getters
	std::string getName() const;

	// Setters
	void setName(std::string);

private:
	std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif // !ZOMBIE_HPP
