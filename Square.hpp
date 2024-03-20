//
// Created by afcm on 20/03/24.
//

#ifndef GEOMETRIE_B1A_SQUARE_HPP
#define GEOMETRIE_B1A_SQUARE_HPP


#include "Figure.hpp"

class Square: public Figure {
private:
    double lenght;
public:
    explicit Square(double lenght);
    void display() const override;
    [[nodiscard]] double perimeter() const override;
    [[nodiscard]] double area() const override;
};


#endif //GEOMETRIE_B1A_SQUARE_HPP
