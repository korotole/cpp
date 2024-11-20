# Operator overloading

- an operator is a *symbol* designed to **operate** on data
- single symbols, di-graphs, tri-graphs, keywords
- unary, binary, ternary
- prefix, infix, postfix
- can redefine only existing operators with new domains, cannot change the meaning of existing ones
- C++ *treats overloaded operators as very specific functions* 
- an operator function may be implemented in two ways:
  - as **a member function of a class** – it’s implicitly assumed that an object of that class is one of the required operator’s arguments
  - as **a “standalone” function** – the function must explicitly specify the types of all its arguments
- `void operator << (int v) throw(stack_overflow);`
- **????? -> the corresponding parameter of the operator function must be passed by value**
- the operator should be able to throw the same exceptions as the member function it uses
- **not necessarily** `void` return type
- **`Stack&`**` Stack::operator<< (int v) throw (stack_overflow) { push(v); return `**`*this`**`; }`
- `int& operator[](int index) throw(std::range_error);`
  
- the number of arguments of the overloaded operator function is strictly restricted and it’s precisely defined by the context in which the function exists
- overloading of **operator=** CANNOT be defined as a global function
- overloading one of the operators has absolutely no impact on the others (==, !=)
- **the original (not overloaded) boolean binary operators use a short-circuit evaluation tactic**
  - overloaded functions cannot make such distinctions
- overloaded **compound assignment operators** (*=, +=, ...) CANNOT be defined as a global function
  - have **one argument** and directly *modify their home object*
  - the function should **return a reference** to the modified object to allow *chaining*
- overloaded **prefix increment operators** -> a parameter-less operator (function)
  - may not be implemented as a global function
- overloaded **prefix increment operators** -> a **one (*dummy* parameter)** operator (function)
  - may not be implemented as a global function
  - should return a copy of the *unmodified* object
  - the presence of the dummy int parameter is the only trait that allows the compiler to distinguish between prefix and postfix overloaded operators
- overloaded **subscript operator[]**
  - **originally cummutative**: `arr[0] = 0;` **`1[arr] = 1;`**
  - requires **two arguments**: a *pointer* (because the name of an array is interpreted as a pointer to its first element) and an *int value* as an index
  - when overloaded, *any type* of *any sign* can be passed as index
  - when overloaded, **no longer cummutative**
  - may not be implemented as a global function
- overloaded **function invocation operator()** 
  - may not be implemented as a global function
  - **the number of its parameters isn’t predefined**
  - *the `return` type is neither predefined nor suggested*
  - one class may contain more than one overloaded operator () function
- , -> *& typename new new[] delete delete[] -> all overloadable
- NON-overloadable operators: . :: ?: sizeof
  
# Enumerated types

- `enum weekday (SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSTADY,FRIDAY,SATURDAY);`
- a value greater by 1 comparing to the previous one
- any `enum` type value is implicitly promoted to the `int` type when used in a context requiring integral value
- `enum Symbols{ALPHA = -1, BETA = 1, GAMMA};`
- more than one symbol of the enum type may have been assigned with the same value
- all the **symbols must be unique**
- **`enum` type symbols must be unique across a namespace**