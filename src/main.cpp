#include <imgui.h>

#include "raylib.h"
#include "rlImGui.h"

int main() {
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Game Template");

    rlImGuiSetup(true);

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        char* successMessage = "Build Successful!";
        int fontSize = 25;

        int textWidth = MeasureText(successMessage, fontSize);

        DrawText(
            successMessage,
            screenWidth/2 - textWidth/2,
            screenHeight/4,
            fontSize,
            BLACK
        );

        // Draw a red square at the center
        int squareSize = 100;
        DrawRectangle(
            (screenWidth - squareSize) / 2,
            (screenHeight - squareSize) / 2,
            squareSize,
            squareSize,
            RED
        );

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
