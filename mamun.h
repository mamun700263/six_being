#ifndef MAMAUN_H
#define MAMAUN_H

#include "warrior.h"

class Mamun : public Warrior {
private:
    
    int puzzle_power;


public:
    Mamun(string name, string gender,int health_capasity, int age, int health, int respect,
         int defence, int attack, int brain, int control, int puzzle_power);
    ~Mamun();

    // Only NEW methods unique to Mamun
    void puzzle_breaker();
    void displayStats() const;
};

#endif