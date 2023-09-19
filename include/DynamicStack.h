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

    const T &top();

    bool push(const T &elem);

    bool pop();

    void display() const;
};

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
    return false;
}

template<typename T>
bool DynamicStack<T>::pop() {
    return false;
}

template<typename T>
void DynamicStack<T>::reduceStack() {

}

template<typename T>
void DynamicStack<T>::extendStack() {

}

#endif //STACK_DYNAMIC_STACK_H
