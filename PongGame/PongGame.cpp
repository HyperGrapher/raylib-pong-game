#include "raylib.h"

int main()
{
    InitWindow(1280, 720, "Pong");
    
    SetWindowState(FLAG_VSYNC_HINT);
    // SetWindowState(FLAG_FULLSCREEN_MODE);




    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);
        
        DrawCircle(GetScreenWidth() / 2, GetScreenHeight() / 2, 8, WHITE);
        DrawFPS(15, 15);
        EndDrawing();

    }

    CloseWindow();
}
