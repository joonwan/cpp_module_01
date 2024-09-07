#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{
}

void	HumanB::setWeapon(Weapon &_weapon)
{
	this -> weapon = &_weapon;
}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << this -> weapon -> getType() << std::endl;
}

void	HumanB::printWeaponAddress()
{
	std::cout << "Human's weapon address = " << &(this -> weapon) << std::endl;
}
