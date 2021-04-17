from math import fabs
g = 9.8
x0 = int(input('Введите x0: '))
v0 = int(input('Введите v0: '))
t = int(input('Введите t: '))
xt = x0 + v0 * t - (g * t * t)/2

print(fabs(xt-x0))
