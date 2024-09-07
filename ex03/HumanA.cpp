#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon)
{
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << this -> weapon.getType() << std::endl;
}

void	HumanA::printWeaponAddress()
{
	std::cout << "Human's weapon address = " << &(this -> weapon) << std::endl;
}
