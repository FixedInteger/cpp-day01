#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
    std::cout << "Weapon constructor called" << std::endl;
}

Weapon::~Weapon()
{
    std::cout << "Weapon destructor called" << std::endl;
}

std::string const &Weapon::getType() const
{
    return (this->type);
}

void Weapon::setType(std::string ptype)
{
  type = ptype;
}