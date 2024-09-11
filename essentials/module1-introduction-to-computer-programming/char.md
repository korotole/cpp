# Char

In C++ *all strings are treated as arrays.*

`char character1 = 'A';`

`char character2 = 65;` (not preferable, some specific computers do not support ASCII)

Computers store characters as *numbers* (integers); implies the support of all the operations and *possibility to assign* a `char` value to an `int` variable.

**Neither `long` nor `short` can be used with `char`**.

**ASCII** (American Standard Code for Information Interchange): 256 different characters, 128 most interested;
ASCII is a subset of UNICODE.

From 'A' (97) to 'a' (65) there are exactly 32 symbols (' ').

**Literal** - a symbol which uniquely identifies its value.

**Escape character**: `\` (escape from the normal meaning of the character that follows the slash)
- `\n` – denotes a **transition to a new line** and is sometimes called an **LF (Line Feed)**, as printers react to this character by pulling out the paper by one line of text.
- `\r` – denotes the **return to the beginning of the line** and is sometimes called a **CR (Carriage Return)**; printers respond to this character as if they are told to re-start printing from the left margin of the already printed line.
- `\0` -  is a **nul** character that **does not represent any character**.

Escaping is possible via *octal* or *hexadecimal* numbers (only for computers implementing the ASCII code):
- `\47` or `\047` -> `'\''` (decimal `39`)
- `\x27` or `\X27` -> `'\''` (decimal `39`)








