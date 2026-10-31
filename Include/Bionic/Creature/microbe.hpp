#pragma once

#include <string>

#include "Math/Vector_2/vector_2.hpp"

namespace Creature::Bionic::Microbe
{
    struct Properties
    {
        std::string name = "Microbe";

        float speed = 10.0;
        float lifespan = 100.0;
        float metabolism = 100.0;
        float max_health = 100.0;
    };

    struct State
    {
        float health = 100.0;
        float hunger = 100.0;
        float energy = 500.0;
        float age = 0.0;
    };

    struct Spatial_Properties
    {
        Vector::Vector_2 position;
        Vector::Vector_2 acceleration;
        Vector::Vector_2 velocity;

        float radius = 0.0;
        float mass = 0.0;

        float rotation = 0.0;
        float angular_velocity = 0.0;
    };
}