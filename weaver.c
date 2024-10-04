#include <stddef.h>
#include <stdlib.h>
#include <raylib.h>
#include "weaver.h"

void setTileType(Tile * this_tile, TileType * this_type) {
    this_tile->type = *this_type;
}

void setTileMap(Tile * tiles, TileType * types, int nrows, int ncols) {
    int i, j;
    for (i = 0; i < nrows; i++) {
	for (j = 0; j < ncols; j++) {
	    setTileType(&tiles[(ncols*j) + i], &types[(ncols*j) + i]);
	}
    }
}

void printTileMap(Tile * tiles, int nrows, int ncols) {
    int i, j;
    int x = 0;
    int y = 0;
    for (i = 0; i < nrows; i++) {
	for (j = 0; j < ncols; j++) {
            DrawText(TextFormat("%u", (tiles[(ncols*i) + j]).type),
		    30 + x, 100 + y, 14, WHITE);
	    x += 20; 
	}
	x = 0;
	y += 20;
    }
}
