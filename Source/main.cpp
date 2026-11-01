#include <print>

#include <raylib/include/raylib.h>

#include "Math/Vector_2/vector_2.hpp"
#include "Bionic/Creature/microbe.hpp"
#include "World/world.hpp"

void Update()
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
    bionic_manager.Add_Microbe();

    float microbe_position_x = bionic_manager.microbes[0].spatial_properties.position.x = 200;
    float microbe_position_y = bionic_manager.microbes[0].spatial_properties.position.y = 200;
    float microbe_2_position_x = bionic_manager.microbes[1].spatial_properties.position.x = 500;
    float microbe_2_position_y = bionic_manager.microbes[1].spatial_properties.position.y = 500;

    while (!WindowShouldClose())
    {
        world.Update(GetFrameTime());
        /*
        BeginDrawing();
        ClearBackground(BLACK);
        EndDrawing();
        */
        
    }

    CloseWindow();

    return 0;
}