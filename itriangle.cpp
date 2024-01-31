#include "itriangle.h"

TriangleInterface::TriangleInterface(int minNum, int maxNum, TriangleOptions option)
    : minNum(minNum), maxNum(maxNum), option(option){}
TriangleInterface::~TriangleInterface() { }

void TriangleInterface::create()
{
    std::vector<std::pair<int, int>> data;
    bool isCorrect = false;

    switch (option)
    {
    case TriangleOptions::TwoCathetus:
        function.set(rand() % (maxNum - minNum + 1) + minNum, rand() % (maxNum - minNum + 1) + minNum, 0);
        break;

    case TriangleOptions::HypCat:
        function.set(0, rand() % (maxNum - minNum + 1) + minNum, rand() % (maxNum - minNum + 1) + minNum);
        break;

    }
}

std::string TriangleInterface::description()
{
    return std::string("Вычислите площадь треугольника");
}

std::string TriangleInterface::task()
{
    std::tuple < double, double, double> a = function.get();
    std::string s = std::to_string(std::get<0>(a))+", " + std::to_string(std::get<1>(a))+", "+ std::to_string(std::get<2>(a));
    return std::string("Square of Triangle with sides:" + s + " = ~?");
}

std::string TriangleInterface::answer()
{
    return std::to_string(function.solve());
}
