//! COMPONENT OVERRIDING 1
class Class
{
public:
    void setVal(int value)
    {
        Class::value = value;
    }
    int getVal(void);

private:
    int value;
};

//! COMPONENT OVERRIDING 2
class Class
{
public:
    void setVal(int value)
    {
        this->value = value;
    }
    int getVal(void);

private:
    int value;
};

//! COMPONENT OVERRIDONG 3
class Class
{
public:
    void setVal(int value)
    {
        (*this).value = value;
    }
    int getVal(void);

private:
    int value;
};

//! COMPONENT OVERLOADING
class Class
{
public:
    void setVal(int value) { this->value = value; }
    void setVal(void) { value = -2; }
    int getVal(void) { return value; }

private:
    int value;
};

#include <iostream>
#include <string>
using namespace std;
class Pet
{
protected:
    string Name;

public:
    Pet(string n) { Name = n; }
    void Run(void) { cout << Name << ": I'm running" << endl; }
};
class Dog : public Pet
{
public:
    Dog(string n) : Pet(n) {};
    void MakeSound(void) { cout << Name << ": Woof! Woof!" << endl; }
};
class Cat : public Pet
{
public:
    Cat(string n) : Pet(n) {};
    void MakeSound(void) { cout << Name << ": Meow! Meow!" << endl; }
};
int main(void)
{
    Pet *a_pet1 = new Cat("Tom");
    Pet *a_pet2 = new Dog("Spike");
    a_pet1->Run();
    static_cast<Cat *>(a_pet1)->MakeSound();
    a_pet2->Run();
    static_cast<Dog *>(a_pet2)->MakeSound();
    return 0;
}