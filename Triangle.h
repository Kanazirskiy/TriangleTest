#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <cmath>
#include <iostream>


class Triangle {
private:
    double katet_1;
    double katet_2;
    double hypotenuse;
public:

    Triangle();
    Triangle(double katet_1,double katet_2,double hypotenuse);

    double Square_2katets();

    double Square_katet_hyp();

};


#endif // TRIANGLE_H
