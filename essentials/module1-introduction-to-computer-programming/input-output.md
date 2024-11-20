# Input

Both the `<<` (*insertion*) operator and the `cout` stream are responsible for two important actions:
- *converting* the internal (machine) representation of the integer value into a form acceptable for humans
- *transferring* the converted form to the output device e.g. console

**Manipulator** -  a special kind of entity that tells the stream that the data form has to be changed immediately. All elements outputted after the manipulator activation will be presented in the desired form (even after the end of `cout` statement).

- `std::cout << "byte in hex: " << `**`hex`**` << byte;`
- `std::cout << "byte in dec: " << `**`dec`**` << byte;` (default)
- `std::cout << "byte in oct: " << `**`oct`**` << byte;`

Technically, a manipulator is a function that changes one of the output stream’s properties, called basefield. The property is used to determine what number should be used as a base during the conversion of any int value into human readable text.

`#include <iomanip>`	
`cout << setbase(16) << byte;` (8, 10, 16 the only acceptable arguments)

Output streams are **able to recognize the type of the printed value**.

**New line**:
- `\n`
- `std::endl`

# Output

- `cin`
- `>>` (*extraction operator*)
- transferring the human-readable form of the data from the input device.
- converting the data into the internal (machine) representation of the value being input.
- `std::cin >> max_sheep;`
- a **need explicitly specify the variable** that can store the data entered by the user.
-  *if there is no data in the input stream or the data is invalid, the cin stream returns a null reference (reference to itself elsewise)*