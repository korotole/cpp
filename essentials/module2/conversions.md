# Conversions

**Conversion** -  the act of changing the nature of the data (*data type*) without, if possible, changing the value.

**Implicit conversions** - affect data of fundamental (basic) types and are most often associated with a change of *the internal representation*:
- part of a complex expression
- the role of logical condition
- subject to assignment

**Explicit conversions** (*typecasting*):
- **C-style casting**: `(long) int` - basic types
- **Functional notation**: `long(int)` - basic types + objects

Different types conversion:
- GOOD SCENARIO: **the length of the memory representation remains the same or increases**.

To avoid losses, compiler uses the strategy named **promotion**:
- data of type `char` or `short int` will be converted to type `int` (**integer promotion**);
- data of type `float` undergoes a conversion to type `double` (**floating point promotion**);
- if there’s any value of type `double` in the expression, the other data will be converted to a `double`;
- if there’s any value of type `long int` in the expression, the other data will be converted to `long int`;