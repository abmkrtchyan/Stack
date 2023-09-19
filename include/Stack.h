#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <iostream>
#include "IStack.h"

template<typename T>
class Stack : public IStack<T> {
private:
    std::size_t capacity;
    std::size_t top_index;
    T *stack;
public:
    explicit Stack(std::size_t capacity);

    std::size_t getCapacity() const;

    std::size_t getSize() const;

    bool isEmpty() const;

    bool isFool() const;

    const T &top();

    bool push(const T &elem);

    bool pop();

    void display() const;
};

template<typename T>
void Stack<T>::display() const {
    std::cout << "Stack capacity: " << this->capacity << std::endl;
    for (std::size_t i = 0; i < this->top_index; i++) {
        std::cout << this->stack[i] << " ";
    }
    std::cout << "\n";
}

template<typename T>
bool Stack<T>::pop() {
    if (isEmpty()) {
        return false;
    }
    this->top_index--;
    return true;
}

template<typename T>
bool Stack<T>::push(const T &elem) {
    if (!isFool()) {
        this->stack[this->top_index] = elem;
        this->top_index++;
        return true;
    }
    return false;
}

template<typename T>
bool Stack<T>::isFool() const {
    return this->capacity <= this->top_index;
}

template<typename T>
const T &Stack<T>::top() {
    if (!isEmpty()) {
        return this->stack[this->top_index - 1];
    }
    throw std::runtime_error("Stack is empty!");
}

template<typename T>
bool Stack<T>::isEmpty() const {
    return this->getSize() == 0;
}

template<typename T>
std::size_t Stack<T>::getSize() const {
    return this->top_index;
}

template<typename T>
std::size_t Stack<T>::getCapacity() const {
    return this->capacity;
}

template<typename T>
Stack<T>::Stack(std::size_t capacity) : capacity(capacity), top_index(0) {
    this->stack = new T[capacity];
}

#endif //STACK_STACK_H
