#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include <string>
using namespace std;

class Warrior {
private:
    string name;
    string gender;
    int health_capasity;
    int age;
    int health;
    int respect;
    int defence;
    int attack;
    int brain;
    int control;

public:
    Warrior(string name,string gender, int age,int health_capasity, int health, int respect,
            int defence, int attack, int brain, int control);
    ~Warrior();

    string getName()  const { return name; }
    int getHealth()    { return health; }
    int getAttack()   const { return attack; }
    int getDefence()  const { return defence; }
    void receiveHeal(int health_points);
    void takeDamage(int points);
    int getHealth() const { return health; }
    void displayStats() const;
};

#endif