import threading
import os


def Task1(Value):
    for i in range (1,Value,1):
        if(Value % i == 0):
            if i % 2 == 0:
                print("Even Factors", i )

def Task2(Value):
    for i in range (1,Value,1):
        if(Value % i == 0):
            if i % 2 == 1:
                print("Odd Factors", i )

def main():
    No = 0
    print(" Enter number")
    No = int(input())
    

    t1 = threading.Thread(target = Task1, args = (No, ))
    t2 = threading.Thread(target = Task2, args = (No, ))

    t1.start()
    t2.start()

    t1.join()
    t2.join()



if __name__ == "__main__":
    main()