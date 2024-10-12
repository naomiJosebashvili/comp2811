#include <stdexcept>
#include <iostream>
#include "rect.hpp"
#include "shape.hpp"

using namespace std;

Rectangle::Rectangle(double x, double y, double w, double h):
    Shape(x, y), xUpperLeft(x), yUpperLeft(y), width(w), height(h) {
        if (w <= 0.0) {
            throw std::invalid_argument("Width must be > 0");
        }
        else if (h <= 0.0) {
            throw std::invalid_argument("Height must be > 0");
        }
}

void Rectangle::draw() const {
    cout << "Drawing Rectangle("
    << "x=" << getX()
    << ", y=" << getY()
    << ", w=" << getWidth()
    << ", h=" << getHeight()
    << ")" << endl;
}