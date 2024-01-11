#include "Ant.h"

int Ant::getHealth()
{
    return health;
}

int WorkerAnt::getCountCollectRes()
{
    return countCollectRes;
}

std::string WorkerAnt::getTypeRes()
{
    return typeRes;
}

bool WarriorAnt::isArmorEmpty()
{
    if (armor > 0)
        return false;
    else
        return true;
}

int WarriorAnt::getDamage()
{
    return damage;
}

void WarriorAnt::attack(int dmg)
{
    health -= dmg;
}

void WarriorAnt::reduceArmor(int dmg)
{
    armor -= dmg;
}
