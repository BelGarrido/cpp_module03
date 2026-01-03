#include "ClapTrap.hpp"

int main(){
    std::string name = "Ruben";
    ClapTrap clapTrap1(name);
    clapTrap1.attack("niñaLituana");
    clapTrap1.takeDamage(5);
    clapTrap1.beRepaired(2);
}