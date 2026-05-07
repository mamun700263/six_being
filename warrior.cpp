#include "warrior.h"


Warrior::Warrior(string name,string gender,int health_capasity, int age, int health, int respect,
                 int defence, int attack, int brain, int control)
    : name(name),gender(gender), age(age), health(health), respect(respect),
      defence(defence), attack(attack), brain(brain), control(control),health_capasity(health_capasity)
{
    cout << "⚔️  Warrior " << this->name << " has entered the arena!" << endl;
}

Warrior::~Warrior() {
    cout << "💀 Warrior " << name << " has fallen!" << endl;
}




void Warrior::receiveHeal(int health_points){
    health += health_points;
    if(health > health_capasity) health = health_capasity; // cant exceed max
    cout << name << " healed! HP: " << health << "/" << health_capasity << endl;
}

void Warrior::take_damage(int points){
    health -= points;
    if(health < 0){
        health = 0;
        Warrior::~Warrior();
    }
    cout << name << " took " << points << " damage! HP: " << health << "/" << health_capasity << endl;
}

void Warrior::upgradeAttack(int points){
    attack += points;
    cout << name << "'s attack increased by " << points << "! Attack: " << attack << endl;
}

void Warrior::upgradeDefence(int points){
    defence += points;
    cout << name << "'s defence increased by " << points << "! Defence: " << defence << endl;
}

void Warrior::addRespect(int points){
    respect += points;
    cout << name << " gained " << points << " respect! Respect: " << respect << endl;
}

void Warrior::addControl(int points){
    control += points;
    cout << name << "'s control increased by " << points << "! Control: " << control << endl;
}

void Warrior::upgradeBrain(int points){
    brain += points;
    cout << name << "'s brain increased by " << points << "! Brain: " << brain << endl;
}

void Warrior::displayStats() const {
    cout << "──────────────────────────" << endl;
    cout << "⚔️  Name   : " << name    << endl;
    cout << "⚔️  Gender   : " << gender    << endl;
    cout << "🎂 Age    : " << age      << endl;
    cout<<"Health Capasity: "<<health_capasity<<endl;
    cout << "❤️  Health : " << health  << endl;
    cout << "🛡️  Defence: " << defence << endl;
    cout << "⚔️  Attack : " << attack  << endl;
    cout << "🧠 Brain  : " << brain   << endl;
    cout << "🎮 Control: " << control << endl;
    cout << "🏆 Respect: " << respect << endl;
    cout << "──────────────────────────" << endl;
}