//
// Created by afcm on 20/03/24.
//

#ifndef GEOMETRIE_B1A_FIGURE_HPP
#define GEOMETRIE_B1A_FIGURE_HPP


class Figure {
public:
    virtual ~Figure() = default;
    virtual void display() const;
    [[nodiscard]] virtual double perimeter() const = 0;
    [[nodiscard]] virtual double area() const = 0;
};


#endif //GEOMETRIE_B1A_FIGURE_HPP
