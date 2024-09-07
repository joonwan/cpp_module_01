#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon()
{
	
}

Weapon::Weapon(const std::string _type)
{
	this -> type = _type;
}

const std::string &Weapon::getType() const
{
	return this -> type;
}

void	Weapon::setType(const std::string newType)
{
	this -> type = newType;
}

void	Weapon::printTypeAddr()
{
	std::cout << "Weapon instance type addr = " << &type << std::endl;
}
