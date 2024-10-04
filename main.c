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
    struct Tile myTile;
    int myDim = tile_row(&myTile);

    // Main loop
    while(!WindowShouldClose()) {
        // Update variables here

        // Draw
    BeginDrawing();

            ClearBackground(BLACK);
            
            DrawText(TextFormat("Number of rows: %d", myDim), 10, 200, 20, LIGHTGRAY);

        EndDrawing();
    }
    CloseWindow();
    
    return 0;
}
