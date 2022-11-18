#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : namePerssonal(name)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Distructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoint != 0)
	{
		std::cout << this->namePerssonal << "attacks" << target << ", causing" << this->attackDamage << "points of damage!" << std::endl;
		this->energyPoint = this->energyPoint - 1;
	}
	else
		std::cout << "You're out of energy." << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->namePerssonal << "get" << amount << "damag" << std::endl;
	this->hitPoint -= amount;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoint != 0)
	{
		std::cout << this->namePerssonal << "repaired" << amount << "hit points" << std::endl;
		this->hitPoint += amount;
	}
	else
		std::cout << "You're out of energy." << std::endl;
}