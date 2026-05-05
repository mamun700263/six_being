#include "prize.h"

Prize::Prize(int healer_health, int health, int attack, int respect, int defence, int control){
    this->healer_health = healer_health;
    this->health        = health;
    this->attack        = attack;
    this->respect       = respect;
    this->defence       = defence;
    this->control       = control;

    cout << "Prize created!" << endl;
}

Prize::~Prize(){
    cout << "Prize destroyed!" << endl;
}

void Prize::Heal(Warrior& target, int health_points){
    // Check if already full health
    if (target.getHealth() >= target.getHealthCapasity()) {
        cout << "⚠️  " << target.getName() << " is already at full health!" << endl;
        return;
    }

    // Check if this prize even has healer health to give
    if (healer_health <= 0) {
        cout << "❌ This prize has no healing power!" << endl;
        return;
    }

    cout << "🔮 Using " << health_points << " healing points"
         << " on " << target.getName() << "!" << endl;

    target.receiveHeal(health_points);

    cout << "✅ " << target.getName() 
         << " now has " << target.getHealth() << " HP!" << endl;
}

int Prize::getHealth()       { return health; }
int Prize::getAttack()       { return attack; }
int Prize::getDefence()      { return defence; }
int Prize::getRespect()      { return respect; }
int Prize::getControl()      { return control; }
int Prize::getHealerHealth() { return healer_health; }

void Prize::displayPrize(){
    cout << "===== Prize =====" << endl;

    if(health)        cout << "Health:        " << health        << endl;
    if(attack)        cout << "Attack:        " << attack        << endl;
    if(defence)       cout << "Defence:       " << defence       << endl;
    if(respect)       cout << "Respect:       " << respect       << endl;
    if(control)       cout << "Control:       " << control       << endl;
    if(healer_health) cout << "Healer Health: " << healer_health << endl;

    if(health + attack + defence + respect + control + healer_health == 0)
        cout << "⚠️  Empty Prize!" << endl;

    cout << "=================" << endl;
}