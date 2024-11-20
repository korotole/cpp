#include <iostream>
#include <string>
using namespace std;

int main() {
    int a = 2, b = a >> 1;
    cout << b << endl;
    int c = b >> a;
    cout << c << endl;
    int d = 1 << c;
    cout << d << endl;
    int e = d << d;
    cout << e << endl;
    return 0;
}