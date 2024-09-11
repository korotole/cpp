# Numbers

**Integers** - numbers without decimal fraction; variables of such type can be declared via `int`.

- `1234567890`
- `-1'234'567'890`
- `3U`

Integers support additional **modifiers**, which may be mixed:
- *long*
- *short*
- *unsigned*

Variables of `long` type can be decalred via ddition of `L` or `l` suffix to the value:

- `long b = 113L;`
- `long c = -2l;`

While using modifiers, `int` might be omitted: `unsigned short variable;`

**Floating-point numbers** - (*floating*) numbers, that might have a *non-empty decimal fraction* with a *finite precision*.

- `0.3`
- `.4`
- `2.`
- `-2f`

The decimal point is essential to recognize floating-point numbers, declared via `float`.

*Computers use different methods for storing floats and ints in their memory.*
**Loss of accuracy** is possible during `float`<->`int` conversions!
*Converting a float into an int is not always feasible.*

**`long float` <=> `double`**

The variables of type `double` may *differ* from the variables of type `float`, **not only in range, but also in accuracy**.

*The variables of type `float` save only **8 digits** precisely.*
*The variables of type `double` save only **15-17 digits** precisely.*

**Numerical anomaly**: `11111111000.0 + 0.00011111111 = 11111110656.000000`. Thus, *computer addition is not always cummutative*.

**Scientific notation**:
- `300000000` <=> `3e8` <=> *times ten to the power of*
- `6.62607E-34`
- the exponent (the value after the "E") **has to be** an *integer*.
- the base (the value in front of the "E") **may or may not** be an *integer*.

# Operators

*Operators of larger (higher) priority perform their operations before the operators with lower priority.*

**Binding** of the operator determines the order of computations performed by some operators with equal priority, put side by side in one expression. 
Most operators in the C++ language have the *left-sided binding* (from left to right).

- **Assignment**: `=` (assign a value)
    - `counter = 1;` -> counter *becomes* 1.
- **Multiplication**: `*`
    - `float a = 6 * 0.125;`
- **Divisional**:  `/`
    - `int b = 10 / 2;`
    - *dividend* / *divisor*
    - division by `0` is *forbidden* and might result into secially featured `inf` value (exception)
- **Addition**: `+`
    - `float c = 8 + 0.8;`
- **Substraction**: `-`
    - `float d = 9 - 0.9;`
    - *minuend* - *substrahend*
- **Unary plus**: `+` (*emphasize / preserve the sign*)
    - `float e = +0.8;`
- **Unary minus**: `-`
    - `float f = -0.9;`
- **Remainder**: `%` (*modulo* operation)
    - `int g = 8 % 3;`
    - no floating-point numbers
    - modulo `0` is *forbidden*
- **Increment**: `++`
    - *Prefix:* `++h;` -> increment the variable by 1 and return its value already increased
    - *Postfix:* `h++;`-> return the original (unchanged) variable's value and then increment the variable by 1.
- **Decrement**: `--`
    - *Prefix:* `--i;` -> decrement the variable by 1 and return its value already decreased.
    - *Postfix:* `i--;`-> return the original (unchanged) variable's value and then decrement the variable by 1.
- **Equality** - a *binary* operator with a *left-side binding*.
    - `==`
    - returns `true` or `false`
- **Inequality** - a *binary* operator with a *left-side binding*.
    - `!=`
    - returns `true` or `false`
- **Greater than** - a *binary* operator with a *left-side binding*.
    - `>`
    - returns `true` or `false`
- **Greater than or equal** - a *binary* operator with a *left-side binding*.
    - `>=`
    - returns `true` or `false`
- **Less than** - a *binary* operator with a *left-side binding*.
    - `<`
    - returns `true` or `false`
- **Less than or equal** - a *binary* operator with a *left-side binding*.
    - `<=`
    - returns `true` or `false`
- **Negation** - an *unary* prefix operator.
    - `!`
    - returns a *negation* of the expression,`true` or `false`.
- **Conjunction** - an *binary* operator.
    - `&&`
    - returns a *conjunction* of the expression,`true` or `false`
- **Disjunction** - a *binary* operator.
    - `||`
    - returns a *disjunction* of the expression,`true` or `false`

*Assignment* operator, following a declaration is called an **initiator**.

---

**bool: `true` = 1**, **`false` = 0**; occupies **8 bits**.

*De Morgan's laws*:
- `!(p && q) == !p || !q`
- `!(p || q) == !p && !q`

**Priorities** (from highest):

| Operator                           |  Note  |
|------------------------------------|--------|
| ! ~ (TYPE) ++ -- + -               | unary  |
| * / %                              |        |
| + -                                | binary |
| >> <<                              |        |
| < <= > >=                          |        |
| == !=                              |        |
| &                                  |        |
| \|                                 |        |
| &&                                 |        |
| \|\|                               |        | 
| = += -= *= /= %= &= \|= ^= >>= <<= |        |

**Parentheses** can change the order of calculation;
*subexpressions in parentheses are always calculated first.*

## Bitwise operators

Bits are numbered from 0 to .. , where 0 is the *lowest* one.

**Bitmask** is  sequence of zeros and ones whose task is to grab the value or to change the selected bits.

> "It's like applying the logical operations to each bit of a variable."

- `&` *(ampersand)*	bitwise conjunction
- `|` *(bar)*	bitwise disjunction
- `~` *(tilde)*	bitwise negation
- `^` *(caret)*	bitwise exclusive or (XOR)

These operators **do support** the *abbreviated form* (`op=`) and are primarily used to:

- **detect a state** of a bit `flag_register & the_mask;`
- **reset** a specific bit `flag_register &= ~the_mask;`
- **set** a specific bit `flag_register |= the_mask;`
- **negate** a specific bit `flag_register ^= the_mask;`

**!!! A XOR A = 0 !!!**

**!!! A XOR 1 = !A !!!**

**!!! A XOR 0 = A !!!**

TODO: read about two's complement numbers

**Bit shifting** is pervormed via digraphs `<<` and `>>`, and can be:
- **logical**, if all the bits of the variable are shifted; shifting takes place when you apply it to the unsigned integers;
- **arithmetic**, if the shift omits the *sign bit* the sign bit is played by the *highest bit* of a variable; if it’s equal to "1", the value is treated as a negative.

The left argument of these operators is the integer value whose bits are shifted. The right argument determines the size of the shift. This shows that this operation is **not commutative**.

`int x = 5;`
`int y = sizeof x;` (sizeof is possible without `()` when dealing with *variables*, not *types*)

