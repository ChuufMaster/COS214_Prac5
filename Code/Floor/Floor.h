#ifndef FLOOR_H
#define FLOOR_H

#include "Tile.h"
#include <iostream>
#include <vector>


class Floor {
public:
  Floor();      /// Default floor plan for the entire system (adjust UML)
  void print(); /// prints the floor
  void changeTile(
      Tile *newTile); /// changing of the tile at that location on the floor
  Tile *getTile(int x, int y);

private:
  std::vector<std::vector<Tile *>> floor;
};

#endif
