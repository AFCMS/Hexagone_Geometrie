#include <iostream>
#include <vector>
#include "Square.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"

int main() {
    std::vector<Figure*> figures;

    figures.push_back(new Triangle(5, 5));
    figures.push_back(new Square(5));
    figures.push_back(new Rectangle(5, 10));
    figures.push_back(new Circle(5));

    for (auto & figure : figures) {
        figure->display();
        std::cout << "Perimeter: " << figure->perimeter() << std::endl;
        std::cout << "Area: " << figure->area() << std::endl << std::endl;
        delete figure;
        figure = nullptr;
    }

    return 0;
}
