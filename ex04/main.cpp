#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(){
    
    std::string nameCT = "BuzzBit";
    DiamondTrap diamondTrap1(nameCT);
    std::cout << "\n";
    std::cout << "*´¯`*..*´¯`* [ Display info: " << diamondTrap1.getName() << " ] *´¯`*..*´¯`* " << std::endl; 

    std::cout << "HitPoints: " << diamondTrap1.getHitPoints() << std::endl; 
    std::cout << "AtackDamage: " << diamondTrap1.getAttackDamage() << std::endl; 
    std::cout << "EnergyPoints: " << diamondTrap1.getEnergyPoints() << std::endl;
    diamondTrap1.guardGate();
    diamondTrap1.highFivesGuys();
    std::cout << "Name: diamondTrap1.getName() " << diamondTrap1.getName() << std::endl;
    std::cout << "Name: diamondTrap1.ClapTrap::getName() " << diamondTrap1.ClapTrap::getName() << std::endl;

    diamondTrap1.whoAmI();
}