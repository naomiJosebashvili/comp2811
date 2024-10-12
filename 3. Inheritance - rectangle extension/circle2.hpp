#pragma once

#include <cmath>
#include "shape.hpp"  

class Circle: public Shape {

    public:
        Circle(double r): Circle(0, 0, r) {}
        Circle(double, double, double);

        double getRadius() const { return radius; }
        bool containsPoint(double, double) const;
        double area() const { return M_PI * radius * radius; }
        double perimeter() const { return 2.0 * M_PI * radius; }
        void draw() const;

    private:
        double radius;

};