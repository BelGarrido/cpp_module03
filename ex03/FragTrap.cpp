#include "FragTrap.hpp"

//___________________ PARAMETIZED_CONSTRUCTOR__


FragTrap::FragTrap(std::string &name): ClapTrap(name, 100, 100, 30) {
    std::cout << "FragTrap " << getName() << " has been created" << std::endl;
}

//_______________________________________COPY__

FragTrap::FragTrap(const FragTrap &original) : ClapTrap(original) {}

FragTrap& FragTrap::operator=(const FragTrap &original) {
    ClapTrap::operator=(original);
    return *this;
}

//_________________________________DESTRUCTOR__

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << getName() << " destroyed" << std::endl;
}

 void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << getName() << " request a high five! ✋ Anyone up?" << std::endl;
}

/*
void FragTrap::attack(const std::string &target) {
    if(getEnergyPoints() > 0) {
        std::cout << "FragTrap " << getName() << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
        setEnergyPoints(getEnergyPoints() - 1);
    }
    else
        std::cout << "FragTrap " << getName() << "has no energy points" << std::endl;    
} */
