#include <iostream>

//! IMPLEMENTATION 1
int stack[100];
int sp = 0; // stack pointer -> number of elements currently stored

void push(int value)
{
    stack[sp++] = value;
}

int pop(void)
{
    return stack[--sp];
}

//! IMPLEMENTATION 2
class Stack
{
private:
    int stack[100];
    int sp;

public:
    Stack(void)
        : sp{0}
    {
    }
    void push(int value)
    {
        stack[sp++] = value;
    }
    int pop(void)
    {
        return stack[--sp];
    }
};

//! IMPLEMENTATION 3
class AddingStack : Stack
{
private:
    int sum;

public:
    AddingStack(void);
    void push(int value);
    int pop(void);
    int getSum(void);
};
AddingStack::AddingStack(void) : Stack()
{
    sum = 0;
}
void AddingStack::push(int value)
{
    sum += value;
    Stack::push(value); //! invocation of superclass method
}
int AddingStack::pop(void)
{
    int val = Stack::pop(); //! invocation of superclass method
    sum -= val;
    return val;
}
int AddingStack::getSum(void)
{
    return sum;
}

//! MAIN

int main(void)
{
    push(3);
    push(2);
    push(1);
    std::cout << pop() << std::endl;
    std::cout << pop() << std::endl;
    std::cout << pop() << std::endl;

    AddingStack super_stack;

    for (int i = 1; i < 10; i++)
        super_stack.push(i);
    std::cout << super_stack.getSum() << std::endl;
    for (int i = 1; i < 10; i++)
        super_stack.pop();
    std::cout << super_stack.getSum() << std::endl;
    return 0;

    return 0;
}
