//
// Created by afcm on 20/03/24.
//

#include <iostream>

#include "Triangle.hpp"

Triangle::Triangle(double _base, double _height) {
    base = _base;
    height = _height;
}

void Triangle::display() const {
    std::cout << "Je suis un triangle" << std::endl;
}

double Triangle::perimeter() const {
    return 3 * base;
}

double Triangle::area() const {
    return base * height / 2;
}

