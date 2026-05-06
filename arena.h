#ifndef ARENA_H
#define ARENA_H
#include "room.h"
#include <vector>
// arena.h
const int MAX_SIZE = 5;

class Arena {
private:
    string name;
    int size;
    Room grid[MAX_SIZE][MAX_SIZE];
    int player_row;
    int player_col;

public:
    Arena(string name, int size);
    ~Arena();

    void moveNorth();
    void moveSouth();
    void moveEast();
    void moveWest();

    Room& getCurrentRoom() { return grid[player_row][player_col]; }
    bool isEscaped();
    void displayMap();
};
#endif