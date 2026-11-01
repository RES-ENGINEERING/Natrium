#include <print>

#include <raylib/include/raylib.h>

#include "Math/Vector_2/vector_2.hpp"
#include "Bionic/Creature/microbe.hpp"
#include "World/world.hpp"

int main()
{
    // Raylib things
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(700, 500, "Natrium");
    MaximizeWindow();
    SetTargetFPS(60);

    Simulation::World world;

    world.Create_Microbe();
    world.Create_Microbe();

    float microbe_position_x = world.microbes[0].spatial_properties.position.x = 200;
    float microbe_position_y = world.microbes[0].spatial_properties.position.y = 200;
    float microbe_2_position_x = world.microbes[1].spatial_properties.position.x = 500;
    float microbe_2_position_y = world.microbes[1].spatial_properties.position.y = 500;

    while (!WindowShouldClose())
    {
        BeginDrawing();
            ClearBackground(BLACK);
            DrawCircle(static_cast<int>(microbe_position_x), static_cast<int>(microbe_position_y), 10, WHITE);
            DrawCircle(static_cast<int>(microbe_2_position_x), static_cast<int>(microbe_2_position_y), 10, WHITE);
        EndDrawing();
    }

    CloseWindow();

    return 0;
}