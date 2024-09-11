#include <iostream>
#include <typeinfo>

int main(void)
{
    long int L = 12L;
    double D = 1.0;

    std::cout << typeid(L+D).name() << std::endl;
}