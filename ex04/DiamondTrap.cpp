#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string &name)
    : ClapTrap(name + "_clap_name"), 
    FragTrap(name), 
    ScavTrap(name), 
    _name(name)
{
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
};

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << getName() << " destroyed" << std::endl;
}

std::string DiamondTrap::getName() const {
    return _name;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap's name: " << getName() << std::endl;
    std::cout << "ClapTrap's name: " << ClapTrap::getName() << std::endl;
}
