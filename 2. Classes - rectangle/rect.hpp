#pragma once

class Rectangle {

    public:
        Rectangle(double w, double h): Rectangle(0.0, 0.0, w, h) {}
        Rectangle(double x, double y, double w, double h);

        double getX() const {return xUpperLeft;}
        double getY() const {return yUpperLeft;}
        double getWidth() const {return width;}
        double getHeight() const {return height;}

        double perimeter() const {return 2 * (width + height);};
        double area() const {return width * height;};

    private:
        double xUpperLeft, yUpperLeft, width, height;

};