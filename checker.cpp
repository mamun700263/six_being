#include "room.h"
#include "warrior.h"
#include "hridoy.h"

int main(){
    Room r1(1,1,0,0,4,5);
    r1.display_direction();
    Warrior player("player_name", "gender_type",20, 100, 100, 90, 85, 95, 70, 80);
    player.displayStats();
    return 0;
}