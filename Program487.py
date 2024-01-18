from functools import reduce

def checkEven(No):
    if(No%2 ==0):
        return True
    else:
        return False

def Increase(No):
    return No+2

def Add(A,B):
    return A+B  


def main():
    Data = []

    print("Enter Number of Element: ")
    Size = int(input())

    print("Enter the elements: ")
    for i in range(Size):
        Value = int(input())
        Data.append(Value)
   

    output = list(filter(checkEven,Data))
    print(output)

    moutput = list(map(Increase,output))
    print(moutput)

    result = reduce(Add,moutput)
    print(result)

if __name__=="__main__":
    main()