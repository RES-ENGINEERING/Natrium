#include <print>

#include <raylib/include/raylib.h>

#include "Math/Vector_2/vector_2.hpp"
#include "Bionic/Creature/microbe.hpp"
#include "World/world.hpp"

void Physics_Procession()
{
    
}

int main()
{
    // Raylib things
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(700, 500, "Natrium");
    MaximizeWindow();
    SetTargetFPS(60);

    Simulation::World world;
    Simulation::World::Bionic_Manager bionic_manager;

    bionic_manager.Add_Microbe();
    auto& microbe_1 = world.bionic_manager.microbes[0];

    microbe_1.spatial_properties.position.x = 200;
    microbe_1.spatial_properties.position.y = 200;
    microbe_1.spatial_properties.radius = 50;

    while (!WindowShouldClose())
    {
        world.Physics_Procession(GetFrameTime());

        BeginDrawing();
            DrawCircle(microbe_1.spatial_properties.position.x, microbe_1.spatial_properties.position.y, microbe_1.spatial_properties.radius * 2, WHITE);
        EndDrawing();
        
    }

    CloseWindow();

    return 0;
}