#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string &name): ClapTrap(name) {
    std::cout << "Scavtrap " << getName() << " has been created" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << getName() << " destroyed" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << getName() << " is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    if(getEnergyPoints() > 0) {
        std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
        setEnergyPoints(getEnergyPoints() - 1);
        //_energyPoints--;
    }
    else
        std::cout << "ClapTrap " << getName() << "has no energy points" << std::endl;    
}
