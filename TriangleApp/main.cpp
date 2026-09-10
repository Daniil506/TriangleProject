#include <iostream>
#include "Triangle.h"

int main() {
    double side, height;

    
    std::cout << "   TRIANGLE AREA CALCULATOR\n";

    std::cout << "Enter side length: ";
    std::cin >> side;

    std::cout << "Enter height: ";
    std::cin >> height;

    Triangle triangle(side, height);
    double area = triangle.calculateArea();

    std::cout << "Triangle area = " << area << std::endl;

    return 0;
}