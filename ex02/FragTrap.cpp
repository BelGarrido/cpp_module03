#include "FragTrap.hpp"

//___________________ PARAMETIZED_CONSTRUCTOR__

FragTrap::FragTrap(std::string &name): ClapTrap(name, 100, 100, 30) {
    std::cout << "FragTrap " << getName() << " has been created" << std::endl;
}

//_______________________________________COPY__

FragTrap::FragTrap(const FragTrap &original) : ClapTrap(original) {}

FragTrap& FragTrap::operator=(const FragTrap &original) {
    ClapTrap::operator=(original);
    return *this;
}

//_________________________________DESTRUCTOR__

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << getName() << " destroyed" << std::endl;
}

 void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << getName() << " request a high five! ✋ Anyone up?" << std::endl;
}

