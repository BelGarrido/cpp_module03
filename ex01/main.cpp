#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
    
    std::string nameCT = "BuzzBit";
    ClapTrap clapTrap1(nameCT);
    std::cout << "\n";
    std::cout << "*´¯`*..*´¯`* [ Display info ] *´¯`*..*´¯`* " << std::endl; 

    std::cout << "HitPoints: " << clapTrap1.getHitPoints() << std::endl; 
    std::cout << "AtackDamage: " << clapTrap1.getAttackDamage() << std::endl; 
    std::cout << "EnergyPoints: " << clapTrap1.getEnergyPoints() << std::endl;

    std::string nameST = "BleepBlop";
    ScavTrap scavTrap1(nameST);

    std::cout << "\n";
    std::cout << "*´¯`*..*´¯`* [ Display info ] *´¯`*..*´¯`* " << std::endl; 

    std::cout << "HitPoints: " << scavTrap1.getHitPoints() << std::endl; 
    std::cout << "AtackDamage: " << scavTrap1.getAttackDamage() << std::endl; 
    std::cout << "EnergyPoints: " << scavTrap1.getEnergyPoints() << std::endl;
   
    scavTrap1.guardGate();
    scavTrap1.attack("cpp");

    std::cout << "\n";
    std::cout << "*´¯`*..*´¯`* [ Display info ] *´¯`*..*´¯`* " << std::endl; 
    std::cout << "HitPoints: " << scavTrap1.getHitPoints() << std::endl; 
    std::cout << "AtackDamage: " << scavTrap1.getAttackDamage() << std::endl; 
    std::cout << "EnergyPoints: " << scavTrap1.getEnergyPoints() << std::endl;
   
    scavTrap1.takeDamage(5);
    scavTrap1.beRepaired(2);

    std::cout << "\n";
    std::cout << "*´¯`*..*´¯`* [ Display info ] *´¯`*..*´¯`* " << std::endl; 
    std::cout << "HitPoints: " << scavTrap1.getHitPoints() << std::endl; 
    std::cout << "AtackDamage: " << scavTrap1.getAttackDamage() << std::endl; 
    std::cout << "EnergyPoints: " << scavTrap1.getEnergyPoints() << std::endl;

}