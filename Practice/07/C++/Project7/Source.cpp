#include <iostream>
#include <cmath>

int main() {
	setlocale(LC_ALL, "rus");
	int par;
	double a, b, c, S, p, A, B, C, x1, x2, x3, y1, y2, y3;

	std::cout << "Введите через что хотите искать площадь треугольника:\n" << "1 - через длины сторон\n" << "2 - через координаты вершин сторон\n";
	std::cin >> par;
	if (par == 1) {
		std::cout << "Введите значение a\n";
		std::cin >> a;
		std::cout << "Введите значение b\n";
		std::cin >> b;
		std::cout << "Введите значение c\n";
		std::cin >> c;
		if ((a < b + c) && (b < a + c) && (c < a + b)) {
			p = (a + b + c) / 2;
			S = sqrt(p * (p - a) * (p - b) * (p - c));
			std::cout << "S = " << S;
		}
		else {
			std::cout << "Такой треугольник не существует";
		}
	}
	else if (par == 2) {
		std::cout << "Введите координаты вершины А\n";
		std::cin >> x1 >> y1;
		std::cout << "Введите координаты вершины B\n";
		std::cin >> x2 >> y2;
		std::cout << "Введите координаты вершины C\n";
		std::cin >> x3 >> y3;
		A = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
		B = sqrt(((x3 - x2) * (x3 - x2)) + ((y3 - y2) * (y3 - y2)));
		C = sqrt(((x3 - x1) * (x3 - x1)) + ((y3 - y1) * (y3 - y1)));
		if ((A < B + C) && (B < A + C) && (C < A + B))
		{
			p = (A + B + C) / 2;
			S = sqrt(p * (p - A) * (p - B) * (p - C));
			std::cout << "S = " << S;
		}
		else
		{
			std::cout << "Такой треугольник не существует\n";
		}
	}
	else {
		std::cout << "Ошибочный ввод";
	}
}