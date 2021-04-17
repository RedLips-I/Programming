a = int(input("Введите основание степени\n"))
b = int(input("Введите показатель степени\n"))
i=1
if b==0:
    print (1)
elif a==0:
    print (0)
elif b==-1:
    print (1/a)
elif b<0:
    while b<0:
        i=i*1/a
        b=b+1
    print(i)
else:
    while b>0:
        i=i*a
        b=b-1
    print (i)