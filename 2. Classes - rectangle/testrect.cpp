#include <iostream>
#include "rect.hpp"

using namespace std;

int main() {
    Rectangle test1(0.0, 4.0, 5.0, 6.0);
    cout << "Test1 perimeter: " << test1.perimeter() << endl;
    cout << "Test1 area: " << test1.area() << endl;

    Rectangle test2(2.6, 8.3, 3.5, 2.7);
    cout << "Test2 perimeter: " << test2.perimeter() << endl;
    cout << "Test2 area: " << test2.area() << endl;
}