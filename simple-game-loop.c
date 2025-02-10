/*
gcc main.c common.c -o main -I ../../../projects/raylib-quickstart/build/external/raylib-master/src/ -I . -L ../../../projects/raylib-quickstart/bin/Debug/ -lraylib -lm -lpthread -ldl -lX11 && ./main
*/
#include "common.h"
#ifndef BLOCKS_LENGTH
#define BLOCKS_LENGTH 4
#endif

int main(){
    InitWindow(screenWidth,screenHeight,"Game");

    Player player = { 0 };
    player.position = (Vector2){ 100, 280 };

    Camera2D camera = { 0 };
    camera.target = player.position;
    camera.offset = (Vector2){ screenWidth / 2.0f, screenHeight / 2.0f };
    camera.zoom = 2.0f;
    SetTargetFPS(30);
    while(!WindowShouldClose()){
        PlayerControls(&player, blocks);
        UpdateCameraCenter(&camera, &player);

        BeginDrawing();
        ClearBackground(RED);
        BeginMode2D(camera);
            for (int i = 0; i < BLOCKS_LENGTH; i++) DrawRectangleRec(blocks[i].rect, blocks[i].color);
            DrawCircleV(player.position,20,WHITE);
        EndDrawing();
        EndMode2D();
    }
    CloseWindow();
}
