#include "Zombie.hpp"

int main()
{
	int zombieCount;

	zombieCount = 5;
	Zombie *zombies;

	zombies = zombieHorde(zombieCount, "foo");
	for(int i = 0 ; i < zombieCount; i++)
		zombies[i].announce();
	delete[] zombies;
}
