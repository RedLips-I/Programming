#include<iostream>
#include<vector>
#include<locale>
#include <algorithm> 

std::vector <int> ARAVAY(std::vector <int> b, int n)
{
	int u = 0;
	sort(b.begin(), b.end(), std::greater<int>());
	if ((b.size() < 5))
	{
		for (int i = 0; i < n; i++)
		{
			if (i < 5)
			{
				std::cout << b[i] << ' ';
			}
			else
			{
				break;
			}
		}
	}
	else
	{
		for (int i = b.size() - 5; i < b.size(); i++)
		{
			std::cout << b[i] << ' ';
		}
	}
	std::cout << "\n";
	return b;
}
int main()
{
	setlocale(LC_ALL, "ru");
	int n, c;
	c = 0;
	std::cout << "������� ���������� ��������\n";
	std::cin >> n;
	std::cout << "������� �������\n";
	std::vector <int> a(n);
	std::vector <int> mas(0);
	std::vector <int> s(0);
	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}
	for (int i = 0; i < a.size(); i++)
	{
		mas.push_back(a[i]);
		int n = mas.size();
		ARAVAY(mas, n);
	}
	return 0;
}