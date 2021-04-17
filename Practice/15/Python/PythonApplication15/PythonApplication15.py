import random
while (1):
    a = random.randint (0, 100)
    i = 1
    x = int(input("Введите число\n"))
    for 1 in range (4):
        if (x < a):
            print ("Рандомное число больше введённого")
        elif (x > a):
            print ("Рандомное число меньше введённого")
        else:
            print ("Вы угадали\n")
            break
        x = int(input())
    if (x != a):
        print ("Вы проиграли, рандомное число - ", a, "\n")
    print ("Если хотите сыграть ещё раз - введите 1")
    k = int(input())
    if (k != 1):
        break