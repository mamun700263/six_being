#include "room.h"

Room::Room(int south, int north, int east, int west){
    cout << "Room created" << endl;
    this->south = south;
    this->north = north;
    this->east  = east;
    this->west  = west;

    cout<<"  "<<north<<" "<<endl;
    cout<<west<<" ";
    cout<<"  "<<east<<endl;
    cout<<"  "<<south<<" "<<endl;

}

Room::~Room(){
    cout << "Room destroyed" << endl;
}