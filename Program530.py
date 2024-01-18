from functools import reduce

def Checkprime (num):
    return 0 not in [num%i for i in range(2,num//2+1)]

def Product(No):
    return (No*2) 

def Gun (No):
    return max(No)

def main():

    Data = []

    Size = int(input("Enter the number of Elements: "))

    print("Enter the Elements: ")
    for i in range(Size):
        Value = int(input())
        Data.append(Value)

    print("Input List: ", Data)

    Output = list(filter(Checkprime,Data))
    print("List after Filter :", Output)

    Moutput = list(map(Product,Output))
    print("List after Map :", Moutput)

    Ret = reduce(Gun,Moutput)
    print("Output of Reduce", Ret)



if __name__ == "__main__":
    main()