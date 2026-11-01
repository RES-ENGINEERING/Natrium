#pragma once

#include <vector>

#include "Bionic/Creature/microbe.hpp"

namespace Simulation
{
    class World
    {
        public:
            std::vector<Creature::Bionic::Microbe> microbes;

            void Create_Microbe();
    };
}