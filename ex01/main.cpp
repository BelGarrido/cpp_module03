#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(){
/*     std::string nameCT = "Ruben";
 
    ClapTrap clapTrap1(nameCT);
    clapTrap1.attack("niñaLituana");
    clapTrap1.takeDamage(5);
    clapTrap1.beRepaired(2); */

    std::string nameST = "Ana";
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