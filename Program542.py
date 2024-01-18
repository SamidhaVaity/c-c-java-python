import multiprocessing
import os

def Task1(Value): 
    for Value in range (1,20):   
        if Value % 2 ==0:
            print("Even Nos: ",Value)
    
def Task2(Value):
    for Value in range (1,20):   
        if Value % 2 ==1:
            print("Odd Nos: ",Value)

def main():
    No =0

    p1 = multiprocessing.Process(target=Task1, args =(No,))
    p2 = multiprocessing.Process(target=Task2, args =(No,))

    p1.start()
    p2.start()

    p1.join()
    p2.join()

if __name__=="__main__":
    main()