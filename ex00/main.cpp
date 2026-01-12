#include "ClapTrap.hpp"

int main(){
    std::string name = "BuzzBit";
    ClapTrap clapTrap1(name);
    clapTrap1.attack("BleepBlop");
    clapTrap1.takeDamage(5);
    clapTrap1.beRepaired(2);
    //NEED MORE TESTS
}
