#include <stdexcept>
#include "rect.hpp"

using namespace std;

Rectangle::Rectangle(double x, double y, double w, double h):
    xUpperLeft(x), yUpperLeft(y), width(w), height(h) {
        if (w <= 0.0) {
            throw std::invalid_argument("Width must be > 0");
        }
        else if (h <= 0.0) {
            throw std::invalid_argument("Height must be > 0");
        }
}