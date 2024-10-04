/* 
Header file for Tile and TileMaps
*/


// Define the Tile type
struct Tile {
    int x_coord, y_coord;
    float angle;
    int flow;
    int filled;
    int tile_type;
    // Pointers to adjacent tiles
    struct Tile* top;
    struct Tile* left;
    struct Tile* right;
    struct Tile* bottom;
};

// Functions to add Tiles
void push_col(struct Tile* this_tile, float angle, int flow, int tile_type);
void push_row(struct Tile* this_tile, float angle, int flow, int tile_type);
int tile_row(struct Tile* this_tile);
int tile_col(struct Tile* this_tile);
void weave(struct Tile* this_tile);