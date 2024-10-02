#include <raylib.h>
#include <raymath.h>


int main(void){
    const int win_width = 500;
    const int win_height = 500;
    //Here begins the main loop of the game
    InitWindow(win_width, win_height, "A test window");
    SetTargetFPS(60);

    // Main loop
    while(!WindowShouldClose()) {
        // Update variables here

        // Draw
    BeginDrawing();

            ClearBackground(BLACK);
            
            DrawText("Congrats! Your first window!", 10, 200, 20, LIGHTGRAY);

        EndDrawing();
    }
    CloseWindow();
    
    return 0;
}
