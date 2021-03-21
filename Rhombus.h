#pragma once
#include "Figure.h"

class Rhombus : public Figure {
public:
    Rhombus() = default;
    Rhombus(Point p1_, Point p2_, Point p3_, Point p4_);
    Point Center() const override;
    double Area() const override;
    void Print(std::ostream& os) const override;
    void Scan(std::istream& is) override;

private:
    Point p1_, p2_, p3_, p4_;
};