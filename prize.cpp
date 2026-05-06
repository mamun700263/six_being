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

// prize.cpp
void Prize::applyHealthTo(Warrior& target){
    if(health <= 0){ cout << "❌ No health in this prize!" << endl; return; }
    target.receiveHeal(health);
}

void Prize::applyAttackTo(Warrior& target){
    if(attack <= 0){ cout << "❌ No attack in this prize!" << endl; return; }
    target.upgradeAttack(attack);
}

void Prize::applyDefenceTo(Warrior& target){
    if(defence <= 0){ cout << "❌ No defence in this prize!" << endl; return; }
    target.upgradeDefence(defence);
}

void Prize::applyRespectTo(Warrior& target){
    if(respect <= 0){ cout << "❌ No respect in this prize!" << endl; return; }
    target.addRespect(respect);
}

void Prize::applyControlTo(Warrior& target){
    if(control <= 0){ cout << "❌ No control in this prize!" << endl; return; }
    target.addControl(control);
}

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