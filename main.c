#include <raylib.h>
#include <raymath.h>
#include "weaver.h"

int main(void){
    const int win_width = 500;
    const int win_height = 500;
    //Here begins the main loop of the game
    InitWindow(win_width, win_height, "A test window");
    SetTargetFPS(60);

    // Test the Tile struct
    Tile myTile;
    Tile myMap[4][4];
    TileType levels[4][4] = {
	{1, 2, 3, 4},
	{0, 1, 2, 3},
	{4, 0, 1, 2},
	{3, 4, 0, 1}
    };
    setTileType(&myTile, &levels[0][1]); // expect TileType 2
    setTileMap(myMap, levels, 4, 4);
    // Main loop
    while(!WindowShouldClose()) {
        // Update variables here

        // Draw
    BeginDrawing();

            ClearBackground(BLACK);
            
            DrawText(TextFormat("Address: %p\n", &myMap), 10, 20, 20, LIGHTGRAY);
	    DrawText(TextFormat("Size: %d\n", sizeof(myMap)), 10, 60, 20, LIGHTGRAY);
	    DrawText(TextFormat("TileType myTile: %i\n", myMap[0][1].type), 10, 80, 10, WHITE);
	    printTileMap(myMap, 4, 4);
        EndDrawing();
    }
    CloseWindow();
    
    return 0;
}
