import threading
import os

def Task1(Value):
    for i in range (50):
        print(i, end ='')

def Task2(Value):
    for i in range (50,0,-1):
        print(i,  end ='')
        

def main():

    No = 0

    Thread1 = threading.Thread(target = Task1, args=(No, ))
    Thread2 = threading.Thread(target = Task2, args=(No, ))

    Thread1.start()
    Thread1.join()

    Thread2.start()
    Thread2.join()


if __name__=="__main__":
    main()