#include "hridoy.h"

Hridoy::Hridoy(string name, string gender,int health_capasity, int age, int health, int respect,
           int defence, int attack, int brain, int control, int puzzle_power)
    : Warrior(name, gender, age,health_capasity, health, respect, defence, attack, brain, control),
      puzzle_power(puzzle_power)
{
    cout << "🔮 Hridoy " << getName() << " has awakened!" << endl;
}

Hridoy::~Hridoy() {
    cout << "💨 Hridoy " << getName() << " has vanished!" << endl;
}



void Hridoy::displayStats() const {
    Warrior::displayStats();
    cout<<"Hridoy Special: "<<endl;
    cout << "🔮 puzzle power : " << puzzle_power << endl;
    cout << "──────────────────────────" << endl;
}