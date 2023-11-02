#include "Tile.h"

Tile::Tile(){
    
}

Tile::Tile(int x, int y) {
    this->xDim = x;
    this->yDim = y;
}

int Tile::getx() {
    return this->xDim;
}

int Tile::gety() {
    return this->yDim;
}

char Tile::getSym() {
    return this->symbol;
}

void Tile::setSym(char s) {
    this->symbol = s;
}

void Tile::setx(int x){
    this->xDim=x;
}

void Tile::sety(int y){
    this->yDim=y;
}