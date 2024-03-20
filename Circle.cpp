//
// Created by afcm on 20/03/24.
//
#include <cmath>
#include <iostream>
#include "Circle.hpp"

Circle::Circle(double _radius) {
    radius = _radius;
}

void Circle::display() const {
    std::cout << "Je suis un cercle" << std::endl;
}

double Circle::perimeter() const {
    return 2 * M_PI * radius;
}

double Circle::area() const {
    return M_PI * radius * radius;
}
