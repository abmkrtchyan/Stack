#include "Stack.h"
#include <iostream>

int main() {
    Stack<int> stack(10);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    stack.push(7);
    stack.push(8);
    stack.push(9);
    stack.push(10);
    stack.display();

    stack.push(11);
    stack.display();

    std::cout << stack.top() << std::endl;
    stack.pop();
    stack.display();

    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.display();

    stack.pop();
    return 0;
}