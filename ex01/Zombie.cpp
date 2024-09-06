#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::Zombie(std::string _name)
{
	this -> name = _name;
}

Zombie::~Zombie()
{
	std::cout << "good bye " << this -> name << std::endl;
}

void	Zombie::announce()
{
	std::cout << this -> name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string _name)
{
	this -> name = _name;
}
