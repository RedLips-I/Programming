#include <iostream>
#include <cmath>
int main(){
    setlocale(LC_ALL, "ru");
    int j, n, f = 0;
    std::cout << "Введите количество билетов\n";
    std::cin >> n;
    if (n < 1 || n > pow(10, 9)) {
        std::cout << "Неверный ввод";
    }
    std::cout << "Введите билеты\n";
    std::string a{};
    for (j = 1; j <= n; j++) {
        std::cin >> a;
        if (a[0] == 'a' && a[4] == '5' && a[5] == '5' && a[6] == '6' && a[7] == '6' && a[8] == '1') {
            std::cout << a << ' ';
        }
        else {
            f = f + 1;
        }
    }
    if (f == n) {
        std::cout << -1;
    }
    return 0;
}