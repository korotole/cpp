# Functions

Function is characterized by:

- **name**
- **parameters**
- **type of result**

> ***Function Declaration (Prototype) & Definition***
The parameters defined within the function are called **formal parameters**. The values actually transferred to the function (thus existing outside the function) are called **actual parameters**.

- **pass by value**
- **pass by reference** (only variables)

*The formal parameter's value doesn't replace the actual parameter's value upon return from the function.*

- *non-default* parameters must be coded before the *default* ones

Formal parameter names can be *omitted* in the function prototype: `float square(float);`

Function **return** statement:

- indicates which values is returned
- terminates the execution of a function 

From the compiler's perspective, each *translated* function's code has to be supplemented with two important elements:

- **prologue** ->  part of the code implicitly executed before the function. The prologue is responsible for transferring parameters from the invoker's code and for storing them in a special transient area called a “stack”.
- **epilogue** ->  implicitly executed just after the function's code and is responsible for transferring the result of the function and for clearing the stack of the values placed there by the prologue.

Dividing a problem -> **decomposition**:

- **top-down** (when you try to define the *most general functions first* and then you *divide them into simpler and more specialized ones*)
- **bottom-up** (when you start your work by creating a set of *narrowly defined and highly specialized functions*, and then *assembling them into more complex structures*)

# Memory allocation

**Amorphous pointer** -> `void *ptr;` (can point to any value of any type) DEREFERENCING IS PROHIBITED

The *newly allocated memory* area is not filled (initiated) in any way, so you should expect it to just contain **garbage**.

- `new`
    - `flat *array = new float[20]`
    - `int var = new int`
- `delete`
    - `delete [] array`
    - `delete var`

Two-dimensional pointer array:

- each row can be *of different length* (triangular matrices)
- `int **ptrarr;`

- `ptrarr = new int * [rows];`    ->      array of raws (pointers to the raws)
- `for (int r = 0; r < rows; r++)`
  `ptrarr[r] = new int[columns];`
- `ptrarr[r]` <=> `*(ptrarr + r)`
- **The order of freeing up memory is in reverse to the order of allocation**



