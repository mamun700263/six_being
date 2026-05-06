#ifndef SHABAB_H
#define SHABAB_H

#include "warrior.h"

class Shabab : public Warrior {
private:
    
    int puzzle_power;


public:
    Shabab(string name, string gender,int health_capasity, int age, int health, int respect,
         int defence, int attack, int brain, int control, int puzzle_power);
    ~Shabab();

    // Only NEW methods unique to Shabab
    void puzzle_breaker();
    void displayStats() const;
};

#endif