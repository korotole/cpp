# Classes

**Class**:
- is a *mathematical* set of all potential beings connected together through precisely defined similarities.
- is a set of objects.
- each *subclass* is more specialized than its *superclass*.
- is an aggregate consisting of variables (also called fields or properties) and functions (sometimes called methods); **both variables and functions are class components**.
**Object**:
- is a being belonging to the class
- *name*, *properties*, *abilities*
- each new class constitutes a new type of data

**Access specifiers**:
- `public` accessible to all users of a class
- `private` accessible only within the class

**Inheritance**:
- Any object bound to a specific level of a class hierarchy inherits all the traits defined inside any of the superclasses.
- `class AddingStack:Stack{ ; }`

`class A {}; A a;`

Defined class becomes an *equivalent of a type*, can be used as a *typename*.
- **inheritance**
- **encapsulation**

Funtions: *inside the class*, *outside the class* -> definition needs to be quialified via `::`.
Both types of functions access the class variables without any obstacles

Constructor: responsible for the proper construction of each new object of the class.
- Not really a function, no return type.
- Is implicitly invoked at the timne of object declaration
- May be overloaded
- A class **contains implicit copy constructor** by default

**A class can have no more than one destructor**.
**A destructor has to be a paameter-less function**.

All variables are **`automatic`** by default and do exist only in the block scope.
But, **`static`** variables are initiated once during the so-called *"program prologue"* and are destroyed after program completion during the operation of the so-called *"program epilogue"*.

**All the class instances share the same static components**.
Static variables have to be defined outside of the class body: `int Class::Counter = 0;`

**In case of manual dynamic memory allocation, static entities are located at stack!**

**IT IS FORBIDEN TO ACCESS NON-STATIC COMPONENTS FROM THE STATIC ONES!!!**

**Constructors from inner objects (objects stored inside other objects) are invoked before the outer object’s constructors start their work.**

**To list all the inner objects’ constructors that you wish to use instead of the default constructors: `Class(...) : a(…), b(…) { … }`**
- sequence reflecting the order of the declaration
- when the constructor is divided between the declaration and the definition, *the list of alternative constructors should be associated with the definition*, not the declaration.

## Stack implementation

- LIFO data structure

## Inheritance

- Superclasss -> base class, subclass -> derived class
- Each class can be used as a base to define a subclass
- It's possible to use more thsn one class to define a subclass
- By **omit the visibility specifier**, the compiler assumes that we’re going to apply a **“private inheritance”**: **all public superclass components turn into *private* access, and private superclass components won't be accessible** at all
- **Preserving the previously used access policy** -> `class Sub :` **`public`** `Super {};`
- *Public* access specifier means that **the class has lost access to the private components of the superclass**
- *Protected* -> any component marked with it behaves like a public component when used by any of the subclasses and looks like a private component to the rest of the world (true only for publicly inherited classes)
- **objects lying at higher levels are compatible with objects at lower levels**
- **objects of the subclass have at least the same capabilities as the superclass objects** -> objects of the superclass are compatible with objects of the subclass
- **objects of the superclass may not have the same capabilities as the subclass objects** -> objects of the subclass are not compatible with objects of the superclass
- while casting super/sub-classes, compiler *isn’t able to check if the pointer being converted is compatible with the object it points to*


| When the component is declared as: | When the class is inherited as: | The resulting access inside the subclass is: |
|------------------------------------|---------------------------------|----------------------------------------------|
| public                             | public                          | public                                       |
| protected                          | public                          | protected                                    |
| private                            | public                          | none                                         |
| public                             | protected                       | protected                                    |
| protected                          | protected                       | protected                                    |
| private                            | protected                       | none                                         |
| public                             | private                         | private                                      |
| protected                          | private                         | private                                      |
| private                            | private                         | none                                         |

When a subclass **declares a method of the name previously known in its superclass, the original method is overridden** -> the subclass hides the previous meaning of the method identifier and any invocation encoded within the subclass will refer to the newer method.
- *uppercasting* & *downcasting*

**Polymorphism** - ***a method to redefine the behaviour of a superclass without touching its implementation***
- declare a method as `virtual`
- **the binding between the original functions and their polymorphic implementations is established when the subclass object is created**, not sooner


