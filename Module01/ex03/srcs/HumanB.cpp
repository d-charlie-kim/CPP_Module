#include "HumanB.hpp"

HumanB::HumanB() {
	std::cout << "Passed Default Constructor\n";
};

HumanB::HumanB(std::string name) {
	_name = name;
	std::cout << _name << ": Constructed\n";
};

HumanB::~HumanB() {
	std::cout << _name << ": Destructed\n";
};

void HumanB::attack() {
	std::cout << _name << " attacks with their ";
	std::cout << _Weapon << "\n";
};

void HumanB::setWeapon(Weapon arm) {
	_Weapon = arm.getType();
};