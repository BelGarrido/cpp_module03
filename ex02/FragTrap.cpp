#include "FragTrap.hpp"

FragTrap::FragTrap(std::string &name): ClapTrap(name, 100, 100, 30) {
    std::cout << "FragTrap " << getName() << " has been created" << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << getName() << " destroyed" << std::endl;
}

/* void FragTrap::guardGate() {
    std::cout << "FragTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}

void FragTrap::attack(const std::string &target) {
    if(getEnergyPoints() > 0) {
        std::cout << "FragTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
        setEnergyPoints(getEnergyPoints() - 1);
    }
    else
        std::cout << "FragTrap " << getName() << "has no energy points" << std::endl;    
} */
