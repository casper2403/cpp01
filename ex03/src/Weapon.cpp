#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string type)
{
    setType(type);
}

void Weapon::setType(const std::string type)
{
    _type = type;
}

const std::string &Weapon::getType() const
{
    return _type;
}

Weapon::~Weapon()
{
}