#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <cmath>
#include <iostream>
#include <tuple>


class Triangle {
private:
    double katet_1;
    double katet_2;
    double hypotenuse;
public:

    Triangle();
    Triangle(double katet_1,double katet_2,double hypotenuse);

    double solve();

    void set(double katet_1, double katet_2, double hypotenuse);
    std::tuple<double, double, double> get();

};


#endif // TRIANGLE_H
