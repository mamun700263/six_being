#include "mome.h"

Mome::Mome(string name, string gender,int health_capasity, int age, int health, int respect,
           int defence, int attack, int brain, int control, int life_power)
    : Warrior(name, gender, age,health_capasity, health, respect, defence, attack, brain, control),
      life_power(life_power)
{
    cout << "🔮 Mome " << getName() << " has awakened!" << endl;
}

Mome::~Mome() {
    cout << "💨 Mome " << getName() << " has vanished!" << endl;
}

void Mome::heal(Warrior& target, int health_points) const {
    if (target.getHealth() >= 100) {
        cout << "⚠️  " << target.getName() << " is already at full health!" << endl;
        return;
    }

    cout << "🔮 " << getName() << " uses " << life_power
         << " to heal " << target.getName()
         << " for " << health_points << " Health points!" << endl;

    target.receiveHeal(health_points);
}

void Mome::castSpell() const {
    cout << "✨ " << getName() << " casts " << life_power << "!" << endl;
}

void Mome::displayStats() const {
    Warrior::displayStats();
    cout<<"Mome Special: "<<endl;
    cout << "🔮 Life Power : " << life_power << endl;
    cout << "──────────────────────────" << endl;
}