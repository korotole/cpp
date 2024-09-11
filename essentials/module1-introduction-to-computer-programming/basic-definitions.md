# Definitions

[Books](https://stackoverflow.com/questions/388242/the-definitive-c-book-guide-and-list):
1. The C++ Programming Language, Stroustrup
2. Thinking in C++, Bruce Eckel
3. Jumping into C++, Alex Allain
4. Effective C++, Scott Meyers

**ISO standardization committee**: https://isocpp.org/std

[C++ Naming Conventions](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#nl8-use-a-consistent-naming-style)

---

**Language** - a tool for expressing and recording human thoughts.

**Lexicon** - rules, determining which symbols (letters, digits, punctuation marks, and so on) could be used in the language. 

**Syntax** - a  set of rules, which determines the appropriate ways of collating the symbols.

**Semantics** - an ability to recognize the meaning of every statement expressed in the given language.

Any program must be *error-free* in these three ways: ***lexically***, ***syntactically*** and ***semantically***.

**Instruction list (IL)** - a complete set of well-known commands (*machine language*).

**High-level programming language* ensures portability.

**Compilation** - the process of translating from a high-level language into a machine language is called compilation.

**Linking** - the phase of "gluing" the different executable codes.

*source code -> preprocessor -> compiler -> linker*

*The changes made by the preprocessor *never* modify the content of a source file in any way.
Any alterations are made on a volatile copy of a program that disappears immediately after the compiler finishes its work.

A **namespace** is an abstract container or environment created to hold a logical grouping of unique entities (blocks).
An entity defined in a namespace is associated only with that namespace.

Every **function** in C++ begins with the following set of information:
1. what is the *result* of the function?
2. what is the *name* of the function?
3. how many *parameters* does the function have and what are their names?

**Function Prototype* (declaration) VS *Function Body* (definition)

**Type** - the characteristic of a number which determines its kind, range and application;
- *integers*, that is, those which are devoid of the fractional part;
- *floating-point* numbers (or simply floats), that contain (or are able to contain) the fractional part.
- etc.

**Comment** -  the remark inserted into the program, which is omitted at the time of compiling.
*Each comment is lexically equivalent to one space.*
 - `// comment` - line comment (until the end of the line)
 - `/* comment */` - block comment (everything in-between)

**Declaration** -  is a syntactic structure that binds a name provided by the programmer with a specific type offered by the C++ language.

**Variable** exists as a result of a *declaration* is characterized by:
- **name**:
    - the name of the variable must be composed of *upper-case or lower-case Latin letters, digits and the character _ (underscore)*;
    - the name of the variable must *begin with a letter*;
    - the *underscore character is a letter*;
    - upper- and lower-case letters are treated as *different*;
- **type** - an *attribute* that uniquely defines which values can be stored inside the variable. 
- **value**

It is allowed to use as many variable declarations as needed.
