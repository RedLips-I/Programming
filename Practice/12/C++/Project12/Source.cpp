#include <iostream>

int main() {
	setlocale(LC_ALL, "rus");
	double a, i=1;
	std::cout << "Введите целове положительное число\n";
	std::cin >> a;
	if ((a > 12) || (a < 0)) {
		std::cout << "Неверный ввод";
	}
	else {
		for (a; a > 0; a--) {
			i = i * a;
		}
		std::cout << i;
	}
}