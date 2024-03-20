//
// Created by afcm on 20/03/24.
//

#ifndef GEOMETRIE_B1A_TRIANGLE_HPP
#define GEOMETRIE_B1A_TRIANGLE_HPP


#include "Figure.hpp"

class Triangle: public Figure {
private:
    double base;
    double height;
public:
    Triangle(double base, double height);
    void display() const override;
    [[nodiscard]] double perimeter() const override;
    [[nodiscard]] double area() const override;
};


#endif //GEOMETRIE_B1A_TRIANGLE_HPP
