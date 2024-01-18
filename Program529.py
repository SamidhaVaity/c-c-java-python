from functools import reduce

def Checkeven(No):
    return (No%2 == 0)

def Square(No):
    return (No**2)

def Add (A,B):
    return A + B

def main():
    Data = []

    Size = int(input("Enter the Number of Elements : "))

    print("Enter the Elements: ")
    for i in range (Size):
        value = int(input())
        Data.append(value)
    
    print("Input List: ",Data)

    Output = list(filter(Checkeven,Data))
    print("List after Filter :", Output)

    Moutput = list(map(Square,Output))
    print("List after Map :", Moutput)

    Ret = reduce(Add,Moutput)
    print("Output of Reduce", Ret)

if __name__=="__main__":
    main()