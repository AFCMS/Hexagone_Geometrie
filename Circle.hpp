//
// Created by afcm on 20/03/24.
//

#ifndef GEOMETRIE_B1A_CIRCLE_HPP
#define GEOMETRIE_B1A_CIRCLE_HPP


#include "Figure.hpp"

class Circle: public Figure {
private:
    double radius;
public:
    explicit Circle(double radius);
    void display() const override;
    [[nodiscard]] double perimeter() const override;
    [[nodiscard]] double area() const override;
};


#endif //GEOMETRIE_B1A_CIRCLE_HPP
