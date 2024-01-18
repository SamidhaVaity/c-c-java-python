import multiprocessing  
import os

def Task1():
    print("Executing the first task...")
    print("PID of running process Task1: ",os.getpid())

def Task2():
    print("Executing the Second task...")
    print("PID of running process Task2: ",os.getpid())


def main():
    print("Demonstratoin of Multiprocessing")

    print("PID of running process: ",os.getpid())

    Task1()
    Task1()

if __name__=="__main__":
    main()