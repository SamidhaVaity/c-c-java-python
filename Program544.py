import threading
import os

def Task1(Value):
    D = []
    size = int(input("Enter number of Elements: "))
    for i in range (1,size+1):
        value = int(input("Elements: "))
        D.append(value)

    sum = 0
    for i in range (size):        
        if (D[i] % 2 == 0):
            sum = sum + D[i]

    print("Evenlist Addition is",sum)

def Task2(Value):
    D = []
    size = int(input("Enter number of Elements: "))
    for i in range (1,size+1):
        value = int(input("Elements: "))
        D.append(value)

    sum = 0
    for i in range (size):        
        if (D[i] % 2 == 1):
            sum = sum + D[i]

    print("Oddlist Addition is",sum)


def main():
    No = 0

    t1 = threading.Thread(target = Task1, args= (No, ))
    t2 = threading.Thread(target = Task2, args= (No, ))

    t1.start()
    t1.join()

    t2.start    ()
    t2.join()

if __name__=="__main__":
    main()