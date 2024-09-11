# Flow control

**Flow control** is managed via *conditional statements*.
- *cascade*
- *nesting*

Control structures:
- `if`
- `else`
- `while`
- `do - while`
- `for`
- `switch - case`

Notes on **`switch`** control structure:

- the value after the case **must not be an expression** containing variables or any other entities whose values aren't known at compilation time;
- the case branches are **scanned in the same order** in which they are specified in the program; this means that the most common selections should be placed first.

**Braces** `{ }` create a *compound statements*;

The **loop** consists of 2 parts:

- **loop's head**
- **loop's body**

The variable used for counting the loop's turns is often called a **control variable**.
- `break` - exits the loop immediately and unconditionally ends the loop’s operation; the program begins to execute the nearest instruction after the loop's body;
- `continue` – behaves as the program suddenly reached the end of the body; the end of the loop's body is reached and the condition expression is tested immediately.

**Conjunction** - the simultaneous fulfillment of several conditions.
**Disjunction** - the fulfillment of at least one condition.

