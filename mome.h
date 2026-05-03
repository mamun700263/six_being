#ifndef MOME_H
#define MOME_H

#include "warrior.h"

class Mome : public Warrior {
private:
    
    int life_power;


public:
    Mome(string name, string gender,int health_capasity, int age, int health, int respect,
         int defence, int attack, int brain, int control, int life_power);
    ~Mome();

    // Only NEW methods unique to Mome
    void heal(Warrior& target, int points) const;
    void castSpell() const;
    void displayStats() const;
};

#endif