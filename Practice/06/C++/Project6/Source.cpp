#include <iostream>
#include <cmath>

int main() {
	setlocale(LC_ALL, "rus");
	double a, b, c, x, x1, x2, D;

	std::cout << "Введите a\n";
	std::cin >> a;
	std::cout << "Введите b\n";
	std::cin >> b;
	std::cout << "Введите c\n";
	std::cin >> c;

	if (a == 0 && b == 0 && c == 0) {
		std::cout << "x принадлежит всей числовой прямой";
	}
	else if (a == 0 && b == 0) {
		std::cout << "Нет корней";
	}
	else if ((a == 0 && c == 0) || (b == 0 && c == 0)) {
		x = 0;
		std::cout << "x = " << x;
	}
	else if (a == 0) {
		x = -c / b;
		std::cout << "x = " << x;
	}
	else if (b == 0) {
		if ((a > 0 and c > 0) or (a < 0 and c < 0)) {
			std::cout << "Корней нет";
		}
		else {
			x1 = sqrt(-c / a);
			x2 = -sqrt(-c / a);
			std::cout << "x1 = " << x1 << "\n";
			std::cout << "x2 = " << x2;
		}
	}
	else if (c == 0) {
		x1 = 0;
		x2 = -b/a;
		std::cout << "x1 = " << x1 << '\n' << "x2 = " << x2;
	}
	else {
		D = b * b - 4 * a * c;
		if (D < 0) {
			std::cout << "Нет вещественных корней";
		}
		else if (D == 0) {
			x = -b / (2 * a);
			std::cout << "x = " << x;
		}
		else {
			x1 = (-b + sqrt(D) / (2 * a));
			x2 = (-b - sqrt(D) / (2 * a));
			std::cout << "x1 = " << x1 << "\n" << "x2 = " << x2;
		}
	}
}