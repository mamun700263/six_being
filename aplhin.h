#ifndef ALPHIN_H
#define ALPHIN_H

#include "warrior.h"

class Alphin : public Warrior {
private:
    
    int puzzle_power;


public:
    Alphin(string name, string gender,int health_capasity, int age, int health, int respect,
         int defence, int attack, int brain, int control, int puzzle_power);
    ~Alphin();

    // Only NEW methods unique to Alphin
    void puzzle_breaker();
    void displayStats() const;
};

#endif