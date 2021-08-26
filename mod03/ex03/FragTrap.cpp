#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	std::cout << this << "\tDefault constructor for FragTrap" << std::endl;
	name = "default";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(std::string addName) : ClapTrap(addName) {
	std::cout << this << "\tConstructor FragTrap" << std::endl;
	name = addName;
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap(FragTrap &other) {
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
}

FragTrap::~FragTrap() {
	std::cout << this << "\tDestructor FragTrap" << std::endl;
}

FragTrap & FragTrap::operator = (FragTrap const &other) {
	name = other.name;
	hitPoints = other.hitPoints;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
	return *this;
}

void FragTrap::highFivesGuys(void) {
	std::cout << this << "\tHey, high five!" << std::endl;
}