# Strings

The `string` type is **not a built-in type**, requires `#include <string>`
- `string surename = "korotetskyi";`
- `string surename("korotetskyi");`

Word *string* represents both **a type name** and **an entity consisting of a finite number of characters**.

## String Operators

- `+` -> **string concatenation**
    - **Cannot concatenate literals** !!!
- `+=`
- `==` -> **string comparison** (this + all below is done *in alphabetical order*)
- `<`
- `>`
- `>=`
- `<=`
- `!=`
- **`.compare()`**
    - `str1.compare(str2) == 0` when `str1 == str2`
    - `str1.compare(str2) > 0` when `str1 > str2`
    - `str1.compare(str2) < 0` when `str1 < str2`

Input of string via `cin` **ends on the first whitespace**!!!
- use `getline()` function instead

## Substrings

*Substring* -> a part of the string.

`newstr = oldstr`**`.substr(`**`substr_start_position, length_of_substr`**`)`**
- numbering begins with 0
- `s.substr(1,2)` describes a substring of the s string, starting at its second character and ending at its third character (inclusively);
- `s.substr(1)` describes a substring starting at the second character of the s string and **containing all of the remaining characters**, including the last one;
- `s.substr()` is just a copy of the whole string
- **Exception** occurs while getting substrings of length, which's bigger than the length of the initial one.
Pay attention!!!!

These two functions are *synonyms*:
**!!! `str.length() == str.size()`:** return the number of bytes in *currently stored* in the string.
- `.capacity()` -> current capacity of allocated buffers
- `.max_size()` -> maximal size of the allocated buffer

The buffers of the string get resized *transparently* as the string increases in size.

### Substrings comparison

- `S.compare(substr_start, substr_length, other_string)`
- `S.compare(substr_start, substr_length, other_string, other_substr_start, other_substr_length)`

### Finding strings inside strings

- `int a = S.find(another_string, start_here);`
- `int b = S.find(any_character, start_here);`

In both variants, the start_here parameter defaults to 0, so omitting will result in search from the beginning.
The result returned by the functions points to the first location within the string where the searched string / char begins.
- **`string::npos`** if found nothing

### Control the size of a string

- `string.reserve(25)` -> content is **immune** to the effect of the `.reserve()` function

### Control over the string content

- **Remove all characters currently stored:** (equivalent to = "") -> `.clear()`
- **Change the size of a string:** `.resize()` -> results into string *truncation** or *expansion** (*null "\0"* character by default, can be customized)
- **Checking emptiness:** `.empty()` (equivalent to == "")

### Accessing characters within a string

- `string[i] = 'q`

### Appending a (sub)string

- `.append()` <=> +=, `.append(string, 0, 3)`, `.append(2, '!')`
- appends string, substring and sequence of repeated chars
- *returns the subsequent string as a result*
- **append one char** -> `.push_back('a')`

### Inserting a (sub)string or a character

- `.insert()`
- does **not** replace the characters at the specified location, but rather moves the present ones to the right to free up the space where needed
- *returns the subsequent string as a result*

### Assigning a (sub)string or a character

- `.assign()` <=> =
- has a lot of useful overloads
- *returns the subsequent string as a result*

### Replacing a (sub)string

- `.replace()`
- has a lot of overloads
- *returns the subsequent string as a result*

### Erasing a (sub)string

- `.erase(begin, end)`
- *returns the subsequent string as a result*

### Exchanging the contents of two strings

- `.swap(string)` -> does **not** swap physically, but rather "changes the pointers"

