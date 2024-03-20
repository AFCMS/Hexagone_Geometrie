//
// Created by afcm on 20/03/24.
//
#include <iostream>
#include "Square.hpp"

Square::Square(double _lenght) {
    lenght = _lenght;
}

void Square::display() const {
    std::cout << "Je suis un carré" << std::endl;
}

double Square::perimeter() const {
    return lenght * 4;
}

double Square::area() const {
    return lenght * lenght;
}

