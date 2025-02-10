/*
gcc raylib-boilerplate.c -o raylib-boilerplate -I ../projects/raylib-quickstart/build/external/raylib-master/src/ -L ../projects/raylib-quickstart/bin/Debug/ -lraylib -lm -lpthread -ldl -lX11 && ./raylib-boilerplate
*/
#include <raylib.h>

int main(){
    int screenWidth, screenHeight;
    screenWidth = 800; screenHeight = 500;
    InitWindow(screenWidth,screenHeight,"BoilerPlate");
    Camera2D camera = { 0 };
    /*
    camera.target = player.position;
    camera.offset = (Vector2){ screenWidth / 2.0f, screenHeight / 2.0f };
    camera.zoom = 2.0f;
    */
    SetTargetFPS(30);
    while(!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(RED);
        EndDrawing();
    }
    CloseWindow();
}
