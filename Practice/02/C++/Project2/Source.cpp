#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int a = 3;
	int b = 3.14;

	double c = 3;
	double d = 3.14;
	cout << "«начение a = " << a << "\n" << "«начение b = " << b << "\n";
	// int может содержать только целочисленное значение, если встречаетс¤ дробное число, то дробна¤ часть отбрасываетс¤.
	cout << "«начение с = " << c << "\n" << "«начение d = " << d;
	// double может содержать и целые и дробные числа.
}