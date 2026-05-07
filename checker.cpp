#include "room.h"
#include "warrior.h"
#include "hridoy.h"
#include "prize.h"
#include "zombies.h"
#include <ctime>
#include <thread>
#include <chrono>
// array of my warriors
// array of enimy warriors
// they will strick each other untill they die
// there will be 3 type of strikes "body" "head", "swing"
// body show will be on body 
// head shot will be on head
//swing will create a bleeding

int attack_calculator(int damage, Warrior &warrior) {
    float total = damage * (warrior.getAttack()/100.0f) * (warrior.getControl()/100.0f);
    return (int)total;
}

int defence_calculator(int damage, Warrior &warrior) {
    float total = damage - damage * (warrior.getDefence()/100.0f) * (warrior.getControl()/100.0f);
    return (int)total;
}

void one_vs_one_combat(Warrior &protector, Warrior &enemy) {
    string strikes[3] = {"head", "swing", "body"};
    int damage[3]     = {300,     50,       100};
    int recovery[3]   = {800,    300,     500};  // ms to wait after each strike

    srand(time(0));

    while (protector.is_alive() && enemy.is_alive()) {
        // Player attacks
        int r1 = rand() % 3;
        int total_attack = attack_calculator(damage[r1],protector);
        int total_damage = defence_calculator(total_attack,enemy);
        
        cout << "Player: " << strikes[r1] << " (" << total_damage << " dmg)\n";
        enemy.take_damage(total_damage);
        this_thread::sleep_for(chrono::milliseconds(recovery[r1]));

        if (!enemy.is_alive()) break;

        // Enemy attacks
        int r2 = rand() % 3;
        total_attack = attack_calculator(damage[r2],enemy);
        total_damage = defence_calculator(total_attack,protector);
        cout << "Enemy: " << strikes[r2] << " (" << total_damage << " dmg)\n";
        protector.take_damage(total_damage);
        this_thread::sleep_for(chrono::milliseconds(recovery[r2]));
    }
}



int main(){
    Warrior player("player_name", "gender_type",100, 100, 100, 90, 85, 95, 70, 80);
    player.displayStats();
    Prize p(0, 10, 5, 0, 8, 0);  // health=10, attack=5, defence=8
    Room r1(p,1,1,0,0,4,5);
    r1.display_direction();
    Zombie z1("z1","male",20,20,200,30,1,20,1,10);

    p.applyHealthTo(player);    // hridoy gets health
    one_vs_one_combat(player,z1);
    player.displayStats();
    z1.displayStats();
    return 0;
}