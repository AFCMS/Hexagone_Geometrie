//
// Created by afcm on 20/03/24.
//

#include <iostream>
#include "Rectangle.hpp"

Rectangle::Rectangle(double _lenght, double _width) {
    lenght = _lenght;
    width = _width;
}

void Rectangle::display() const {
    std::cout << "Je suis un rectangle" << std::endl;
}

double Rectangle::perimeter() const {
    return 2 * (lenght + width);
}

double Rectangle::area() const {
    return lenght * width;
}
