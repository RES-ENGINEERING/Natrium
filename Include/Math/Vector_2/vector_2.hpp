#pragma once

namespace Vector
{
    struct Vector_2
    {
        float x;
        float y;

        Vector_2 Add(const Vector_2& other) const;
        Vector_2 Subtract(const Vector_2& other) const;
        Vector_2 Multiply(const Vector_2& other) const;
        Vector_2 Divide(const Vector_2& other) const;

        float Length() const;
        float Length_Squared() const;
        float Dot(const Vector_2& other) const;
        
        Vector_2 Normalize() const;
    };
}