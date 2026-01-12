#include "ClapTrap.hpp"

//___________________ PARAMETIZED_CONSTRUCTOR__

ClapTrap::ClapTrap(std::string &target) {
    _name = target;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "ClapTrap " << _name << " created" << std::endl;
}

//_________________________________DESTRUCTOR__

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}

//___________________________________ METHODS__

void ClapTrap::attack(const std::string& target) {
    if(_energyPoints > 0) {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        _energyPoints--;
    }
    else
        std::cout << "ClapTrap " << _name << "has no energy points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if(_hitPoints >= (int)amount) {
        _hitPoints = _hitPoints - amount;
        std::cout << "ClapTrap " << _name << " lost " << amount << " hit points" << std::endl;
    }
    else {
        _hitPoints = 0;
        std::cout << "ClapTrap " << _name << " lost " << _hitPoints << " hit points" << std::endl;
    }  
}

void ClapTrap::beRepaired(unsigned int amount) {
    if(_energyPoints > 0) {
        _hitPoints = _hitPoints + amount;
        std::cout << "ClapTrap " << _name << " retrieved " << amount << " hit points" << std::endl;
        _energyPoints--;
    }
    else
        std::cout << "ClapTrap " << _name << " has no energy points" << std::endl;
}
