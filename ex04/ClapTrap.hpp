#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
    protected:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;

    public:
        ClapTrap(std::string &target);
        ClapTrap(std::string &target, int hitPoints, int energyPoint, int attackDamage);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName() const;
        int getHitPoints();
        int getEnergyPoints();
        int getAttackDamage();

        void setEnergyPoints(unsigned int amount);
} ;

#endif