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


