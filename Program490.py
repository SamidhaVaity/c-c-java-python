from functools import reduce

checkEven = lambda No : (No%2 ==0)

Increase = lambda No : No+2

Add= lambda A,B: A+B  


def main():
    Data = []

    print("Enter Number of Element: ")
    Size = int(input())

    print("Enter the elements: ")
    for i in range(Size):
        Value = int(input())
        Data.append(Value)

    print("Input Data: ",Data )
   

    output = list(filter(checkEven,Data))
    print("Output after Filter: ",output)

    moutput = list(map(Increase,output))
    print("Output after Map: ",moutput)

    result = reduce(Add,moutput)
    print("Output after Reduce: ",result)

if __name__=="__main__":
    main()