#include "Bionic/Creature/microbe.hpp"

#include <string>
#include <cmath>

#include "Math/Vector_2/vector_2.hpp"

namespace Creature::Bionic::Microbe
{
    float Spatial_Properties::Get_Speed() const
    {
        return std::hypot(velocity.x, velocity.y);
    }
}