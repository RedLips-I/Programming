#include <iostream>

int main() {
	setlocale(LC_ALL, "rus");
	double a, b, i;
	std::cout << "¬ведите основание степени\n";
	std::cin >> a;
	std::cout << "¬ведите показатель степени\n";
	std::cin >> b;
	i = 1;
	

	if (b == 0) 
	{
		std::cout << 1;
	}
	else if (a == 0) 
	{
		std::cout << 0;
	}
	else if (b == -1)
	{
		std::cout << 1 / a;
	}
	else if (b < 0)
	{
		for (b;  b <= -1; b++)
		{
			i = i * 1 / a;
		}
		std::cout << i;
	}
	else 
	{
		for (b; b >= 1; b--) 
		{
			i = a * i;
		}
		std::cout << i;
	}
}