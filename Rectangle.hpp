//
// Created by afcm on 20/03/24.
//

#ifndef GEOMETRIE_B1A_RECTANGLE_HPP
#define GEOMETRIE_B1A_RECTANGLE_HPP

#include "Figure.hpp"

class Rectangle: public Figure {
private:
    double lenght;
    double width;
public:
    Rectangle(double lenght, double width);
    void display() const override;
    [[nodiscard]] double perimeter() const override;
    [[nodiscard]] double area() const override;
};


#endif //GEOMETRIE_B1A_RECTANGLE_HPP
