#ifndef ZOMBIES_H
#define ZOMBIES_H

#include "warrior.h"

class Zombie : public Warrior {
private:
    
    int puzzle_power;


public:
    Zombie(string name, string gender,int health_capasity, int age, int health, int respect,
         int defence, int attack, int brain, int control, int puzzle_power);
    ~Zombie();

    // Only NEW methods unique to Zombie
    void puzzle_breaker();
    void displayStats() const;
};

#endif