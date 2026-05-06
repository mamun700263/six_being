#ifndef PRIZE_H
#define PRIZE_H
#include <iostream>
#include <string>
#include "warrior.h"
using namespace std;

class Prize{
    private:

    int health;
    int attack;
    int respect;
    int defence;
    int control;
    int healer_health;

    public:
    Prize(int healer_health=0, int health=0, int attack=0, int respect=0, int defence=0, int control=0);
    ~Prize();


    void displayPrize();

    void Heal(Warrior& target, int health_points);
    
    void getAttack() ;      
    void getDefence()  ;    
    void getRespect() ;     
    void getControl()      ;
    void getHealerHealth() ;
    
    void applyHealthTo(Warrior& target);
    void applyAttackTo(Warrior& target);
    void applyDefenceTo(Warrior& target);
    void applyRespectTo(Warrior& target);
    void applyControlTo(Warrior& target);

    
};
#endif