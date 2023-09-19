#include "Stack.h"
#include "IStack.h"
#include "DynamicStack.h"
#include <iostream>

int main() {
    IStack<int> staticStack = new Stack<int>(10);
    IStack<int> dynamicStack = new DynamicStack<int>();

    staticStack.push(1);
    staticStack.push(2);
    staticStack.push(3);
    staticStack.push(4);
    staticStack.push(5);
    staticStack.push(6);
    staticStack.push(7);
    staticStack.push(8);
    staticStack.push(9);
    staticStack.push(10);
    staticStack.display();

    staticStack.push(11);
    staticStack.display();

    std::cout << staticStack.top() << std::endl;
    staticStack.pop();
    staticStack.display();

    staticStack.pop();
    staticStack.pop();
    staticStack.pop();
    staticStack.pop();
    staticStack.pop();
    staticStack.pop();
    staticStack.pop();
    staticStack.pop();
    staticStack.pop();
    staticStack.display();

    staticStack.pop();
    return 0;
}