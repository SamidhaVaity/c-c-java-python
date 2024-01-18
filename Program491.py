import functools 


def main():
    Data = []

    print("Enter Number of Element: ")
    Size = int(input())

    print("Enter the elements: ")
    for i in range(Size):
        Value = int(input())
        Data.append(Value)

    print("Input Data: ",Data )
   

    output = list(filter((lambda No : (No%2 ==0)),Data))
    print("Output after Filter: ",output)

    moutput = list(map((lambda No : No+2),output))
    print("Output after Map: ",moutput)

    result = functools.reduce((lambda A,B: A+B),moutput)
    print("Output after Reduce: ",result)

if __name__=="__main__":
    main()