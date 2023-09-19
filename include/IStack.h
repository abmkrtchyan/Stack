#ifndef STACK_I_STACK_H
#define STACK_I_STACK_H

#include <cstddef>

template<typename T>
class IStack {
public:
    virtual std::size_t getSize() const = 0;

    virtual bool isEmpty() const = 0;

    virtual bool isFool() const = 0;

    virtual const T &top() = 0;

    virtual bool push(const T &elem) = 0;

    virtual bool pop() = 0;

    virtual void display() const = 0;
};

#endif //STACK_I_STACK_H
