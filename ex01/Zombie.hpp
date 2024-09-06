#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <sstream>

class Zombie{
	private:
		std::string name;
	
	public:
		void	announce();
		void	setName(std::string _name);
		Zombie();
		Zombie(std::string _name);
		~Zombie();
};

Zombie	*newZombie(std::string name);
Zombie	*zombieHorde( int N, std::string name);
void	randomChump(std::string name);

#endif
