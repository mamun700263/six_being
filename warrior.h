#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include <string>
using namespace std;

class Warrior {
private:
    string name;
    string gender;
    int age;
    int brain;
    int health_capasity;

    int health;
    int attack;
    int respect;
    int defence;
    int control;

public:
    Warrior(string name, string gender, int age, int health_capasity, int health, int respect,
            int defence, int attack, int brain, int control);
    ~Warrior();

    // Getters
    string getName()          const { return name; }
    int getHealth()           const { return health; }
    int getHealthCapasity()   const { return health_capasity; }
    int getAttack()           const { return attack; }
    int getDefence()          const { return defence; }
    int getRespect()          const { return respect; }
    int getControl()          const { return control; }
    int getBrain()            const { return brain; }

    // Take & receive
    void receiveHeal(int health_points);
    void takeDamage(int points);

    // Stat upgrades from prizes
    void upgradeAttack(int points);
    void upgradeDefence(int points);
    void addRespect(int points);
    void addControl(int points);
    void upgradeBrain(int points);
    void displayStats() const;
};

#endif