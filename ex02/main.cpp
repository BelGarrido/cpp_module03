#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(){
    
    std::string nameCT = "BuzzBit";
    ClapTrap clapTrap1(nameCT);
    std::cout << "\n";
    std::cout << "*´¯`*..*´¯`* [ Display info: " << clapTrap1.getName() << " ] *´¯`*..*´¯`* " << std::endl; 

    std::cout << "HitPoints: " << clapTrap1.getHitPoints() << std::endl; 
    std::cout << "AtackDamage: " << clapTrap1.getAttackDamage() << std::endl; 
    std::cout << "EnergyPoints: " << clapTrap1.getEnergyPoints() << std::endl;

    std::string nameST = "BleepBlop";
    ScavTrap scavTrap1(nameST);

    std::cout << "\n";
    std::cout << "*´¯`*..*´¯`* [ Display info: " << scavTrap1.getName() << " ] *´¯`*..*´¯`* " << std::endl; 

    std::cout << "HitPoints: " << scavTrap1.getHitPoints() << std::endl; 
    std::cout << "AtackDamage: " << scavTrap1.getAttackDamage() << std::endl; 
    std::cout << "EnergyPoints: " << scavTrap1.getEnergyPoints() << std::endl;
   
    scavTrap1.guardGate();
    scavTrap1.attack("cpp");

    std::cout << "\n";
    std::cout << "*´¯`*..*´¯`* [ Display info: " << scavTrap1.getName() << " ] *´¯`*..*´¯`* " << std::endl; 
    std::cout << "HitPoints: " << scavTrap1.getHitPoints() << std::endl; 
    std::cout << "AtackDamage: " << scavTrap1.getAttackDamage() << std::endl; 
    std::cout << "EnergyPoints: " << scavTrap1.getEnergyPoints() << std::endl;
   
    scavTrap1.takeDamage(5);
    scavTrap1.beRepaired(2);

    std::cout << "\n";
    std::cout << "*´¯`*..*´¯`* [ Display info: " << scavTrap1.getName() << " ] *´¯`*..*´¯`* " << std::endl; 
    std::cout << "HitPoints: " << scavTrap1.getHitPoints() << std::endl; 
    std::cout << "AtackDamage: " << scavTrap1.getAttackDamage() << std::endl; 
    std::cout << "EnergyPoints: " << scavTrap1.getEnergyPoints() << std::endl;

    std::string nameFT = "Peter";
    FragTrap fragTrap1(nameFT);

    std::cout << "\n";
    std::cout << "*´¯`*..*´¯`* [ Display info: " << fragTrap1.getName() << " ] *´¯`*..*´¯`* " << std::endl; 
    std::cout << "HitPoints: " << fragTrap1.getHitPoints() << std::endl; 
    std::cout << "AtackDamage: " << fragTrap1.getAttackDamage() << std::endl; 
    std::cout << "EnergyPoints: " << fragTrap1.getEnergyPoints() << std::endl;

}