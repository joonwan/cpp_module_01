#include "Zombie.hpp"

int main()
{
	Zombie *zombie;

	zombie = newZombie("heap foo");
	zombie->announce();
	randomChump("stack foo");
	
	delete zombie;
}
