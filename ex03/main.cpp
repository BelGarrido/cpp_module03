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
    std::cout << std::endl;
    diamondTrap1.guardGate();
    diamondTrap1.highFivesGuys();
    std::cout << std::endl;
    std::cout << "NAME manually checked" << std::endl;
    std::cout << "diamondTrap1.getName() " << diamondTrap1.getName() << std::endl;
    std::cout << "diamondTrap1.ClapTrap::getName() " << diamondTrap1.ClapTrap::getName() << std::endl;
    std::cout << std::endl;
    std::cout << "NAME checked via whoAmI" << std::endl;
    diamondTrap1.whoAmI();
    std::cout << std::endl;
}