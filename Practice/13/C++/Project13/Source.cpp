#include <iostream>
#include <cmath>

int main() {
	setlocale(LC_ALL, "rus");
	int a, b=1, c=2, d=1;
	std::cout << "Введите число\n";
	std::cin >> a;
	if ((a < 2) || (a > pow(10, 9))) {
		std::cout << "Введено неверное число";
	}
	else {
		for (c; c < a; c++) {
			b++;
			if ((a % b) == 0) {
				std::cout << "Составное число";
				d = b;
				break;
			}
		}
		if (d == 1){
			std::cout << "Простое число";
		}
	}
}