
## Exceptions
- all errors are exceptions, but not all exceptions are errors
- an exception is *data*, which is "*thrown*"
- `throw` *statement is obligated to throw a value* -> **any object of any accessible class** (it's lifetime lasts until the `catch` construct)
- the part of the code that may cause problems needs to be marked
- when an exception arises, the execution of the block is terminated (exception starts to "fly over the code")
  - *able to "fly" above the function’s boundaries*
- exception should be *caught* on the higher levels of code
- if the exception isn’t caught at the top-most level (in the main function), it’ll cause the program to stop and to emit an appropriate diagnostic message
- *routine processing* should be **separated** from the code run in case of an *emergency*

### Exception types
- **`exception`** -> base for all exceptions
  - **`logic_error`**: connected to program logic i.e. the algorithm, its implementation, data validity and cohesion (higher levels of program abstraction)
    - `domain_error`: data exceeding the permissible range
    - `invalid_argument`: passing improper arguments to methods or functions or constructors
    - `length_error`: using illegal values to specify size/length of data aggregates
    - `out_of_range`: use of illegal indexes/keys while accessing numbered/keyed data collections
  - **`runtime_error`**: “unexpected” accidents like a lack of memory
    - `range_error`: obtaining computation results exceeding the permissible range
    - `overflow_error`: obtaining results too large to represent any useful value
    - `underflow_error`: obtaining results too small to represent any useful value
  - **`bad_alloc`**: undesired effect of invoking the new or new[] operators when the runtime or operating system can’t fulfil our memory requirements
  - **`bad_exception`**: a function tries to throw an exception not specified inside its throw specification. **CANNOT** be caught in usual way, requires work-arounds with `set_unexpected()` and declarations and catches
  - **`#include <exception>`**, `std::`
- in C++, **division by zero doesn’t throw an exception**
- exception handling may be distributed among different parts of the program
  
### Anatomy of an exception object
- a constructor (although objects of this class aren’t created)
- a virtual destructor, originally empty
- a virtual function called **`what()`** which returns the C-style string (a pointer to the array of characters terminated by the null (‘\0’) character)
  - `virtual char* what()`
- exception needs to be thrown inside `try {;;}` block
- `catch(string &anyproblem) { … }`, `catch(exception &otherproblem) { … }` -> it's possible to catch *anything* right after the `try {}` block
- `throw 997;`, `throw string("Bye world!");`
- `catch(string &str)` -> `str` **works like a local (automatic) variable declaration**
- *when the throw statement is executed inside the function, the function won’t be able to return any useful value* -> **the link between the function and the invocation is irretrievably broken when the throw processing starts**
- Upon throwing, the *function epilogue* is **NOT** skipped (fortunately), and applied directly on ALL UPPER LEVELS
- **a function, which throws an exception, may (but doesn’t have to) specify the types of the entities being thrown**
  - `void function(void) throw (Class, int, ...) { throw Class("object"); }`
  - `void function(void) throw ()` -> NO exceptions at all
  - compilation succeeds even with violations of promises made by these keywords -> RUNTIME errors instead (if exceptions type does not match)
  - **the specification has to contain all the exceptions leaving the function – regardless of where they come from**
  - throw (...)
  - **generally obsolete**
- `std::unexpected();` -> termination of a program if the unexpected exception encountered
- `std::set_unexpected()` -> accepts `void func(void)` function to be called at the beginning of the `unexpected()` execution
- `explicit` -> protects the constructor from being used in any context requiring the use of implicit conversions
- `#include <stdexpect>`
- `throw;` -> exception is rethrown

### Catching an exception
- `catch` “catches” only these exceptions that *are compatible in type with the catch header*
- `catch( … ) { ... }` (`...` is called *ellipsis*)-> any exception can be caught, but there's no use of them 'cause the exception object is "lost" and cannot be identified or used (if not rethrown further)
- specification of many different catches is allowed (if they are different) -> the tree is escaped upon the first success
- the ellipsis branch, if it exists, **must be the last specified branch**
- order of "catching" matters, place more general branches the last ones
- any of the `catch` branches might throw an exception too, and the exception won’t be handled in the place where it was created, but at *a higher level*
- definition of own exception class constructor: `stack_bad_alloc::stack_bad_alloc(void) : std::bad_alloc() {}`
-  