/* 
Header file for Tile and TileMaps
*/

typedef enum {
    TD, LR, // Straights
    TR, RB, LB, TL // Elbows
} TileType;

// Define the Tile type
typedef struct {
    float x_coord, y_coord;
    int filled;
    TileType tile_type;
    int flow;
} Tile;
