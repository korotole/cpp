#include <iostream>
#include <sstream>
#include "fraction.hpp"

using namespace std;

int Fraction::LCM(int x, int y) {
    int i = y;
    while(y % x)
        y += i;
    return y;
}

int Fraction::GCD(int x, int y) {
    for(;;)  {
        x %= y;
        if(!x)
            return y;
        y %= x;
        if(!y)
            return x;
    }
}

Fraction::Fraction() : numerator(0), denominator(1) {
};

Fraction::Fraction(int n) : numerator(n), denominator(1) {
};

Fraction::Fraction(int n,int d) throw(domain_error) : numerator(n), denominator(d) {
    if(denominator == 0)
        throw domain_error("bad fraction");
};

string Fraction::GetString(void) {
    ostringstream os;
    os << "[" << numerator << "/" << denominator << "]";
    return os.str();
}

double Fraction::GetValue(void) {
    return double(numerator) / double(denominator);
}

Fraction Fraction::operator!(void) {
    int gcd = GCD(numerator, denominator);
    return Fraction(numerator / gcd, denominator / gcd);
}

Fraction Fraction::operator+(Fraction arg) {
    int common_denom = LCM(denominator, arg.denominator);
    int numera = numerator * common_denom / denominator + 
             arg.numerator * common_denom / arg.denominator;
    Fraction f(numera, common_denom);
    return f;
}

Fraction Fraction::operator*(Fraction arg) {
    int numera = numerator * arg.numerator;
    int denomi = denominator * arg.denominator;
    Fraction f(numera, denomi);
    return !f;
}
Fraction Fraction::operator/(Fraction arg) throw(domain_error) {
    if(arg.numerator == 0)
        throw domain_error("division by zero");
    int numera = numerator * arg.denominator;
    int denomi = denominator * arg.numerator;
    Fraction f(numera, denomi);
    return !f;
}
Fraction& Fraction::operator+=(Fraction arg) {
    int common_denom = LCM(denominator, arg.denominator);
    int numera = numerator * common_denom / denominator + 
             arg.numerator * common_denom / arg.denominator;
    numerator   = numera;
    denominator = common_denom;
    return *this;

}

ostream& operator<< (ostream &ostr, Fraction &f) {
    return ostr << f.GetString();
}

using namespace std;
int main(void) {
	Fraction f1(1,2), f2(2,3), f;
	cout << f1 << "->" << f1.GetValue() << endl;
	cout << f2 << "->" << f2.GetValue() << endl;
	f = f1 + f2;
	cout << f1 << "+" << f2 << "=" << f << endl;
	f = f2 + f2 + f2;
	cout << f2 << "+" << f2 << "+" << f2 << "=" << f << endl;	
	f = !f;
	cout << f2 << "+" << f2 << "+" << f2 << "=" << f << endl;
	f = f1 * f2;
	cout << f1 << "*" << f2 << "=" << f << endl;
	f = f1 / f2;
	cout << f1 << ":" << f2 << "=" << f << endl;
	Fraction f3(7,8);
	f3 += f1;
	cout << f3 << endl;
	return 0;
}