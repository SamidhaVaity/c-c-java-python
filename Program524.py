import MarvellousNum

ListPrime = lambda no : 0 not in [no%i for i in range(2,no//2+1)] 

Add= lambda A,B: A+B 

def main ():
    Data = []

    print("Number of Elements: ")
    size = int(input())

    print("Enter the Elements: ")
    for i in range(size):
        value = int(input())
        Data.append(value) 

    print("Input Elements: ",Data)

    output = list(MarvellousNum.checkprime(ListPrime,Data))
    print("Output : ",output)

    result = MarvellousNum.reduceX(Add,output)
    print("Output : ",result)
    
if __name__=="__main__":
    main()