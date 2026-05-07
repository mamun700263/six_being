#include "room.h"

Room::Room(Prize chest, int south, int north, int east, int west,int row, int column){
    cout << "Room created" << endl;
    this->south = south;
    this->north = north;
    this->east  = east;
    this->west  = west;
    this->row   = row;
    this->column = column;
    this->chest = chest;
}

Room::~Room(){
    cout << "Room "<<row<<" "<<column<<" destroyed" << endl;
}

void Room::display_direction(){
    cout<<"#  "<<north<<"  #"<<endl;
    cout<<"# "<<"r c"<<" #"<<endl;
    cout<<west<<"  ";
    cout<<"+  "<<east<<endl;
    cout<<"# "<<row<<" "<<column<<" #"<<endl;
    cout<<"#  "<<south<<"  #"<<endl;
}