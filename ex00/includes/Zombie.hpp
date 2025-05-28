#ifndef ZOMBIE_HPP

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

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif // !ZOMBIE_HPP
