#include "IStack.h"
#include "Stack.h"
#include "DynamicStack.h"
#include <iostream>

void testStaticStack();

void testDynamicStack();

void testStaticStack() {
    IStack<int> *staticStack = new Stack<int>(10);

    staticStack->push(1);
    staticStack->push(2);
    staticStack->push(3);
    staticStack->push(4);
    staticStack->push(5);
    staticStack->push(6);
    staticStack->push(7);
    staticStack->push(8);
    staticStack->push(9);
    staticStack->push(10);
    staticStack->display();

    staticStack->push(11);
    staticStack->display();

    std::cout << staticStack->top() << std::endl;
    staticStack->pop();
    staticStack->display();

    staticStack->pop();
    staticStack->pop();
    staticStack->pop();
    staticStack->pop();
    staticStack->pop();
    staticStack->pop();
    staticStack->pop();
    staticStack->pop();
    staticStack->pop();
    staticStack->display();

    staticStack->pop();
}

void testDynamicStack() {
    IStack<int> *dynamicStack = new DynamicStack<int>();

    for (int i = 1; i < 15; i++) {
        std::cout << "Push into dynamic stack " << i << "\n";
        dynamicStack->push(i);
        dynamicStack->display();
        std::cout << "\n";
    }

    for (int i = 1; i < 15; i++) {
        std::cout << "Pop from dynamic stack \n";
        dynamicStack->pop();
        dynamicStack->display();
        std::cout << "\n";
    }
}

int main() {
    testStaticStack();
    testDynamicStack();

    return 0;
}