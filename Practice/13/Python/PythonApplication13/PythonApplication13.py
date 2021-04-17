from math import pow
a =int(input("Введите число\n"))
c = 2
b = 1
d = 1
if ((a < 2) or (a > pow(10, 9))):
    print ("Введено неверное число")
else:
    while(c < a):
        c = c + 1
        b = b + 1
        if ((a % b) == 0):
            print ("Составное число")
            d = b
            break
    if (d == 1):
        print ("Простое число")