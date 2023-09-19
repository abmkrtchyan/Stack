#ifndef STACK_DYNAMIC_STACK_H
#define STACK_DYNAMIC_STACK_H

#include "IStack.h"

template<typename T>
class DynamicStack : public IStack<T> {
private:
    void extendStack();

    void reduceStack();

public:
    DynamicStack();

    std::size_t getSize() const;

    bool isEmpty() const;

    const T &top();

    bool push(const T &elem);

    bool pop();
};

#endif //STACK_DYNAMIC_STACK_H
