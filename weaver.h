/* 
Header file for Tile and TileMaps
*/

typedef enum {
	TB = 1,
	LR = 2,
	TL = 3,
	TR = 4,
	LB = 5,
	RB = 6
} TileType;

// Define the Tile type
typedef struct {
    float x_coord, y_coord;
    unsigned char filled;
    unsigned char flow;
    TileType type;
} Tile;

// Takes in two addresses that could be from arrays
void setTileType(Tile * this_tile, TileType * this_type);
void setTileMap(Tile * tiles, TileType * types, int nrows, int ncols);
void printTileMap(Tile * tiles, int nrows, int ncols);
