import multiprocessing  
import os

def Task1(Value):
    print("Executing the first task...")
    print("PID of running process Task1: ",os.getpid())
    print("PID of Parent process Task1: ",os.getppid())

def Task2(Value):
    print("Executing the Second task...")
    print("PID of running process Task2: ",os.getpid())
    print("PID of Parent process Task1: ",os.getppid())


def main():
    print("Demonstratoin of Multiprocessing")

    print("PID of running process: ",os.getpid())

    No = 5
    p1 = multiprocessing.Process(target=Task1, args =(No,))
    p2 = multiprocessing.Process(target=Task2, args =(No,))

    p1.start()
    p2.start()

    p1.join()
    p2.join()

if __name__=="__main__":
    main()