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

    
    

    public:
    Room(int south=0, int north=0, int east=0, int west=0);
    ~Room();

    
};
#endif