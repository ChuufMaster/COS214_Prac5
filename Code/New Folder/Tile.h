#ifndef TILE_H
#define TILE_H
#include <vector>

class Tile {

private:
	char symbol = ' '; ///Default Symbol
	int xDim;
	int yDim;
public:
    Tile(int x, int y); ///Must be modified in UML to include params
    int getx();
    int gety();
    char getSym();
    void setSym(char);
};

#endif
