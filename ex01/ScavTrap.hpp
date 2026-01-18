#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {
    private:
    public:
        ScavTrap(std::string &name);
        ScavTrap(const ScavTrap &original);
        ScavTrap &operator=(const ScavTrap &original);
        ~ScavTrap();
        void guardGate();
        void attack(const std::string &target);
};

#endif
