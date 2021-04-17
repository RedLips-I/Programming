#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");

	double x0, v0, t;
	double g = 9.8;
	double xt;
	cout << "Введите чему равнаяется x0, v0, t" << "\n";
	cin >> x0 >> v0 >> t;

	xt = x0 + v0 * t - (g * t * t) / 2;
	cout << abs(xt-x0) << " метров преодолевает объект.";
}