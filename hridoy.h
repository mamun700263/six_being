#ifndef HRIDOY_H
#define HRIDOY_H

#include "warrior.h"

class Hridoy : public Warrior {
private:
    
    int puzzle_power;


public:
    Hridoy(string name, string gender,int health_capasity, int age, int health, int respect,
         int defence, int attack, int brain, int control, int puzzle_power);
    ~Hridoy();

    // Only NEW methods unique to Hridoy
    void puzzle_breaker();
    void displayStats() const;
};

#endif