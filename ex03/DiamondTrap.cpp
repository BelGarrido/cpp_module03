#include "DiamondTrap.hpp"

//___________________ PARAMETIZED_CONSTRUCTOR__

DiamondTrap::DiamondTrap(std::string &name)
    : ClapTrap(name + "_clap_name"), 
    ScavTrap(name), 
    FragTrap(name), 
    _name(name)
{
    ClapTrap::setEnergyPoints(50);
    ClapTrap::setHitPoints(100);
    ClapTrap::setAttackDamage(30);
/*   _hitPoints = FragTrap::_hitPoints;
    _energyPoints = DiamondTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage; */
};

//_______________________________________COPY__

DiamondTrap::DiamondTrap(const DiamondTrap &original) :  ClapTrap(original), ScavTrap(original), FragTrap(original) {}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &original) {
    ClapTrap::operator=(original);
    return *this;
}

//_________________________________DESTRUCTOR__

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << getName() << " destroyed" << std::endl;
}

//___________________________________ METHODS__

std::string DiamondTrap::getName() const {
    return _name;
}

void DiamondTrap::whoAmI() {
    std::cout << "DiamondTrap's name: " << getName() << std::endl;
    std::cout << "ClapTrap's name: " << ClapTrap::getName() << std::endl;
}
