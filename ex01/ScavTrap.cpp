#include "ScavTrap.hpp"

//___________________ PARAMETIZED_CONSTRUCTOR__

ScavTrap::ScavTrap(std::string &name): ClapTrap(name, 100, 50, 20) {
    std::cout << "Scavtrap " << getName() << " has been created" << std::endl;
}

//_______________________________________COPY__

ScavTrap::ScavTrap(const ScavTrap &original) : ClapTrap(original) {}

ScavTrap& ScavTrap::operator=(const ScavTrap &original) {
    ClapTrap::operator=(original);
    return *this;
}

//_________________________________DESTRUCTOR__

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << getName() << " destroyed" << std::endl;
}

//___________________________________ METHODS__

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
        std::cout << "ScavTrap " << getName() << "has no energy points" << std::endl;    
}