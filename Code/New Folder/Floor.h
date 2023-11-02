#ifndef FLOOR_H
#define FLOOR_H

#include <iostream>
#include <vector>
#include "Tile.h"

class Floor {
public:
    Floor(); ///Default floor plan for the entire system (adjust UML)
    void print(); ///prints the floor
    void changeTile(Tile*); /// changing of the tile at that location on the floor
    Tile getTile(int, int);
private:
	std::vector<std::vector<Tile>> floor;
};

#endif
