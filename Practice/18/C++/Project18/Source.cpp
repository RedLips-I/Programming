#include<iostream>
#include<map>
#include<cmath>
int main() {
	std::string c = "halloklempnerdasistfantastischfluggegecheimen",x;
	std::map<char, int> a;
	int y = 1;
	for (int i = 0; i < c.size(); i++){
		a[c[i]]++;
	}
	std::cin >> x;
	for (int i = 0; i < x.size(); i++){
		y = y * a[x[i]];
	}
	if (y == 0)
		std::cout << -1;
	else {
		std::cout << y / pow(c.size(), x.size());
	}
}