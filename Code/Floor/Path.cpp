#include "Path.h"

/**
 * @brief Construct a new Path:: Path object and assign its symbol and coords
 * 
 * @param x co-ordinate
 * @param y co-ordinate
 */
Path::Path(int x, int y): Tile(x, y) {
    symbol = '=';
}