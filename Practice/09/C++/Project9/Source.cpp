#include <iostream>
#include <cmath>

int main() {
	setlocale(LC_ALL, "rus");
	double h1, h2, m1, m2, fullmin1, fullmin2, inter;
	char col;

	std::cout << "Введите первый момент времени в формате 'ЧЧ:ММ'\n";
	std::cin >> h1 >> col >> m1;
	std::cout << "Введите второй момент времени в формате 'ЧЧ:ММ'\n";
	std::cin >> h2 >> col >> m2;

	fullmin1 = h1 * 60 + m1;
	fullmin2 = h2 * 60 + m2;
	inter = abs(fullmin1 - fullmin2);

	if (inter <= 15) {
		std::cout << "Встреча состоиться\n";
	}
	else {
		std::cout << "Встреча не состоится\n";
	}
}