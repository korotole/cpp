#include <iostream>

int stack[100];
int sp = 0; // stack pointer -> number of elements currently stored

void push(int value)
{
    stack[sp++] = value;
}

int pop(void)
{
    return stack[-- sp];
}

int main(void)
{
    push(3);
    push(2);
    push(1);
    std::cout << pop() << std::endl;
    std::cout << pop() << std::endl;
    std::cout << pop() << std::endl;
    
    return 0;
}