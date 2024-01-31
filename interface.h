#ifndef INTERFACE_H
#define INTERFACE_H

#include <string>
#include <vector>


class TaskInterface {
public:
    virtual ~TaskInterface() = default;

    virtual void create() = 0;
    virtual std::string description() = 0;
    virtual std::string task() = 0;
    virtual std::string answer() = 0;
};

#endif // INTERFACE_H
