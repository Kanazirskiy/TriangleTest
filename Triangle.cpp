#include "Triangle.h"

Triangle::Triangle() : katet_1(0), katet_2(0), hypotenuse(0) {}
Triangle::Triangle(double katet_1, double katet_2, double hypotenuse) : katet_1(katet_1), katet_2(katet_2), hypotenuse(hypotenuse) {
    if (hypotenuse !=0 && (hypotenuse < katet_1|| hypotenuse < katet_2))
    {
        std::cerr << "Error in function Triangle.cpp: Hypotenuse cannot be less than a cathehus\n";
    }
}


double Triangle::solve()
{
    if (hypotenuse == 0)
        return 0.5 * katet_1 * katet_2;
    else if (katet_2 == 0)
        katet_2 = std::sqrt(hypotenuse * hypotenuse - katet_1 * katet_1);
    else if (katet_1 == 0)
        katet_1 = std::sqrt(hypotenuse * hypotenuse - katet_2 * katet_2);
    return 0.5 * katet_1 * katet_2;
}


void Triangle::set(double katet_1, double katet_2, double hypotenuse) {
    this->katet_1 = katet_1;
    this->katet_2 = katet_2;
    this->hypotenuse = hypotenuse;
}

std::tuple<double, double, double> Triangle::get() {
    return std::make_tuple(katet_1, katet_2, hypotenuse);
}
