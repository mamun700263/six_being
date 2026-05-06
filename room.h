#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include <string>
using namespace std;
class Room{
    private:
    int south;
    int north;
    int east;
    int west;
    int row;
    int column;

    //enimies
    //puzzle
    //prize
    
    

    public:
    Room(int south=0, int north=0, int east=0, int west=0,int row=0,int column=0);
    ~Room();
    void display_direction();
    
};
#endif