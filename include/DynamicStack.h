#ifndef STACK_DYNAMIC_STACK_H
#define STACK_DYNAMIC_STACK_H

#include "IStack.h"
#include "Stack.h"

template<typename T>
class DynamicStack : public IStack<T> {
private:
    Stack<T> *stack;

    void extendStack();

    void reduceStack();

public:
    DynamicStack();

    std::size_t getSize() const;

    bool isEmpty() const;

    bool isFool() const;

    const T &top();

    bool push(const T &elem);

    bool pop();

    void display() const;
};

template<typename T>
bool DynamicStack<T>::isFool() const {
    return this->stack->isFool();
}

template<typename T>
void DynamicStack<T>::display() const {
    std::cout << "Dynamic stack" << std::endl;
    this->stack->display();
}

template<typename T>
DynamicStack<T>::DynamicStack() {
    this->stack = new Stack<T>(0);
}

template<typename T>
std::size_t DynamicStack<T>::getSize() const {
    return this->stack->getSize();
}

template<typename T>
bool DynamicStack<T>::isEmpty() const {
    return this->stack->isEmpty();
}

template<typename T>
const T &DynamicStack<T>::top() {
    return this->stack->top();
}


template<typename T>
bool DynamicStack<T>::push(const T &elem) {
    if (isFool()) {
        extendStack();
    }
    return this->stack->push(elem);
}

template<typename T>
bool DynamicStack<T>::pop() {
    if (this->getSize() * 4 <= this->stack->getCapacity()) {
        reduceStack();
    }
    return this->stack->pop();
}

template<typename T>
void DynamicStack<T>::reduceStack() {
    this->stack = new Stack<T>(*this->stack, this->stack->getCapacity() / 2);
}

template<typename T>
void DynamicStack<T>::extendStack() {
    this->stack = new Stack<T>(*this->stack, this->stack->getCapacity() * 2 + 1);
}

#endif //STACK_DYNAMIC_STACK_H
