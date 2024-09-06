#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name)
{
	Zombie				*zombie;
	std::ostringstream	oss;
	int		i;

	i = 1;
	zombie = new Zombie[N];
	while (i < N)
	{
		oss << name << i;
		zombie[i].setName(oss.str());
		i++;
	}
	return zombie;
}
