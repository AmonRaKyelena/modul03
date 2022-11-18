#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string namePerssonal;
	int hitPoint = 10;
	int energyPoint = 10;
	int attackDamage = 0;
public:
	ClapTrap(std::string name);
	
	~ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


