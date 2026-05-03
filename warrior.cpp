#include "warrior.h"


Warrior::Warrior(string name,string gender,int health_capasity, int age, int health, int respect,
                 int defence, int attack, int brain, int control)
    : name(name),gender(gender), age(age), health(health), respect(respect),
      defence(defence), attack(attack), brain(brain), control(control)
{
    cout << "⚔️  Warrior " << this->name << " has entered the arena!" << endl;
}

Warrior::~Warrior() {
    cout << "💀 Warrior " << name << " has fallen!" << endl;
}

void Warrior::receiveHeal(int health_points) {
    if (health_points <= 0) {
        cout << "❌ Invalid heal amount!" << endl;
        return;
    }
    health += health_points;
    if (health > 100) health = 100;
    cout << "💚 " << name << " healed to " << health << " HP!" << endl;
}

void Warrior::takeDamage(int health_points) {
    health -= health_points;
    if (health < 0) health = 0;
    cout << "💔 " << name << " dropped to " << health << " HP!" << endl;
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