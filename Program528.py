from functools import reduce

def Fun(No):
    return ( 70<= No <=90)

def Increase(No):
    return No + 10

def Product (A,B):
    return A * B

def main():
    Data = []

    Size = int(input("Enter the Number of Elements :"))

    print("Enter the Elements : ")
    for i in range (Size):
        Value = int(input())
        Data.append(Value)

    print("Input List : ",Data)

    Output = list(filter(Fun,Data))
    print("List After Filter : ",Output)

    Moutput = list(map(Increase,Output))
    print("List After Map : ",Moutput)

    Ret = reduce(Product,Moutput)
    print("Output of Reduce : ",Ret)

if __name__ == "__main__":
    main()




