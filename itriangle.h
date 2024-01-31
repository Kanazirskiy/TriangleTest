#ifndef TRIANGLEINTERFACE_H
#define TRIANGLEINTERFACE_H
//#include "interface.h"
#include "interface.h"
#include "Triangle.h"

enum class TriangleOptions
{
    TwoCathetus, HypCat
};

class TriangleInterface : public TaskInterface {
private:
    int minNum, maxNum;
    TriangleOptions option;
    //QRandomGenerator* gen;
    Triangle function;

public:
    explicit TriangleInterface(int minNum, int maxNum, TriangleOptions option);
    ~TriangleInterface();

    void create();
    std::string description();
    std::string task();
    std::string answer();
};

#endif // TRIANGLEINTERFACE_H
