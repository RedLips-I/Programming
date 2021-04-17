from math import fabs
h1,colon,m1 = (input("Введите первый момент времени в формате 'ЧЧ : ММ'\n")).split()
h2,colon,m2 = (input("Введите второй момент времени в формате 'ЧЧ : ММ'\n")).split()

h1 = int(h1)
m1 = int(m1)
h2 = int(h2)
m2 = int(m2)
fullmin1 = h1*60+m1
fullmin2 = h2*60+m2
inter = fabs(fullmin1 - fullmin2)

if (inter <= 15):
    print("Встреча состоиться")
else:
    print("Встреча не состоиться")