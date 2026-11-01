#include <print>

#include <raylib/include/raylib.h>

#include "Math/Vector_2/vector_2.hpp"
#include "Bionic/Creature/microbe.hpp"

int main()
{
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(700, 500, "Natrium");
    MaximizeWindow();
    SetTargetFPS(60);

    Creature::Bionic::Microbe::Spatial_Properties microbe;
    Creature::Bionic::Microbe::Spatial_Properties microbe_2;
    microbe.position = Vector::Vector_2(200, 200);
    microbe.radius = 5;
    microbe_2.position = Vector::Vector_2(200, 200);
    microbe_2.radius = 5;

    while (!WindowShouldClose())
    {
        for (int i = 0; i < 100; ++i) microbe_2.position.x += 0.01;
        for (int i = 0; i < 100; ++i) microbe.position.x += 0.01;
        for (int i = 0; i < 100; ++i) microbe.position.y += 0.01;

        if (microbe_2.position.x == 1) microbe_2.position.x = 0;

        BeginDrawing();
            ClearBackground(GetColor(0x181818FF));

            DrawCircle(static_cast<int>(microbe.position.x), static_cast<int>(microbe.position.y), microbe.radius * 2, WHITE);
            DrawCircle(static_cast<int>(microbe_2.position.x), static_cast<int>(microbe_2.position.y), microbe_2.radius * 2, MAROON);

            DrawText("RAYLIB", 100, 100, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}