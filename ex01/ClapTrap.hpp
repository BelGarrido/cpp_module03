#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap {
    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;

    public:

      //______________CONSTRUCTORS_/_DESTRUCTOR__

        ClapTrap(std::string &target);
        ClapTrap(std::string &target, int hitPoints, int energyPoint, int attackDamage);
        ClapTrap &operator=(const ClapTrap &original);
        ~ClapTrap();

      //________________________________METHODS__

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

      //_________________________________GETTERS__

        std::string getName() const;
        int getHitPoints();
        int getEnergyPoints();
        int getAttackDamage();
      //_________________________________GETTERS__

        void setEnergyPoints(unsigned int amount);
} ;

#endif