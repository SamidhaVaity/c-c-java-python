import threading
import os

def Task1(A):
    String = input("Enter Elements: ")
    for i in range(String):
        if i.islower():
            print(i)

def Task2(A):
    String = input("Enter Elements: ")
    for i in range(String):
        if i.isupper():
            print(i)

def Task3(A):
    String = input("Enter Elements: ")
    for i in range(String):
        if i.isdigit():
            print(i)



def main():

    a = ""

    t1 = threading.Thread(target=Task1,args = ("a", ))
    t2 = threading.Thread(target=Task2,args = ("a", ))
    t3 = threading.Thread(target=Task3,args = ("a", ))

    t1.start()
    t2.start()
    t3.start()

    t1.join()
    t2.join()
    t3.join()


if __name__=="__main__":
    main()




