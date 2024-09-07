#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name)
{
	Zombie				*zombie;
	std::ostringstream	oss;
	int		i;

	i = 0;
	zombie = new Zombie[N];
	while (i < N)
	{
		oss << name << i + 1;
		zombie[i].setName(oss.str());
		oss.str("");
		i++;
	}
	return zombie;
}
