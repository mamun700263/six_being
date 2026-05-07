#include "zombies.h"

Zombie::Zombie(string name, string gender,int health_capasity, int age, int health, int respect,
           int defence, int attack, int brain, int control)
    : Warrior(name, gender, age,health_capasity, health, respect, defence, attack, brain, control)
{
    cout << "🔮 Zombie " << getName() << " has awakened!" << endl;
}

Zombie::~Zombie() {
    cout << "💨 Zombie " << getName() << " has vanished!" << endl;
}


