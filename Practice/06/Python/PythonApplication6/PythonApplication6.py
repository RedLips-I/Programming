from math import sqrt
a = (int(input("Введите a: ")))
b = (int(input("Введите b: ")))
c = (int(input("Введите c: ")))
if a==0 and b==0 and c==0:
    print ("x принадлежит всей числовой прямой")
elif (a==0 and c==0) or (b==0 and c==0):
    print ("x = 0")
elif a==0 and b==0:
    print ("Нет корней")
elif a==0:
    print ("x = ", -c/b)
elif b==0:
    if ((a>0 and c>0) or (a<0 and c<0)):
        print("Корней нет")
    else:
        print ("x1 =", sqrt(-c/a),"\n","x2 =", -sqrt(-c/a))
elif c==0:
    print ("x1 = 0\n", "x2 =", -b/a)
else:
    D=b*b-4*a*c
    if D<0:
        print ("Нет вещественных корней")
    elif D==0:
         print ("x =", (-b)/(2*a))
    else:
         print ("x1 =", (-b-sqrt(D))/(2*a))
         print ("x2 =", (-b+sqrt(D))/(2*a))
