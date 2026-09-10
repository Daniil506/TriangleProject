#include <iostream>
#include "Triangle.h"

int main() {
    setlocale(LC_ALL, "Russian");

    double side, height;

    std::cout << "╔══════════════════════════════════════╗\n";
    std::cout << "║   КАЛЬКУЛЯТОР ПЛОЩАДИ ТРЕУГОЛЬНИКА  ║\n";
    std::cout << "╚══════════════════════════════════════╝\n\n";

    try {
        std::cout << "Введите длину стороны: ";
        std::cin >> side;

        std::cout << "Введите высоту: ";
        std::cin >> height;

        Geometry::Triangle triangle(side, height);  // ← с пространством имён

        double area = triangle.calculateArea();

        std::cout << "\n────────────────────────────────────────\n";
        std::cout << "Площадь треугольника = " << area << std::endl;
        std::cout << "────────────────────────────────────────\n";
    }
    catch (const std::exception& e) {
        std::cout << "\n❌ Ошибка: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}