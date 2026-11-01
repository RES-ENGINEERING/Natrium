#include "Math/Vector_2/vector_2.hpp"

#include <cmath>

namespace Vector
{
    Vector_2 Vector_2::Add(const Vector_2& other) const {           return Vector_2{x + other.x, y + other.y};                                                              }
    Vector_2 Vector_2::Subtract(const Vector_2& other) const {      return Vector_2{x - other.x, y - other.y};                                                              }
    Vector_2 Vector_2::Multiply(const Vector_2& other) const {      return Vector_2{x * other.x, y * other.y};                                                              }
    Vector_2 Vector_2::Divide(const Vector_2& other) const
    {
        if (other.x || other.y == 0.0) return Vector_2{0.0, 0.0};
        return Vector_2{x / other.x, y / other.y};
    }
    float Vector_2::Length() const {                                return std::hypot(x, y);                                                                                }
    float Vector_2::Length_Squared() const {                        return (x * x) + (y * y);                                                                               }
    float Vector_2::Dot(const Vector_2& other) const {              return (x * other.x) + (y * other.y);                                                                   }

    Vector_2 Vector_2::Normalize() const
    {
        float length = Length();
        if (length == 0.0f) return Vector_2{0.0, 0.0};

        return Vector_2{x / length, y / length};
    }
}