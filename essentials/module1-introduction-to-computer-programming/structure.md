# Structures

`struct STUDENT s;`
`STUDENT s;`

- `.` **selector** operator
- **structure cannot be a field of itself**.

`
struct DATE {
     int year, month, day;
} DateOfBirth, Visits[100];
DATE current_date;`

`struct {
  int year, month, day;
}
the_date_of_the_end_of_the_world;`

`sizeof(struct {int year, month, day;})`

The curly braces of inner initializers, if they are complete, can be omitted at the structure initializers:

- `STUDENT he = { "Bond", 3.5, 4, 2012, 12, 21};`
- `STUDENT me = { "Mona", 3.5, 4, { 2012 } };`