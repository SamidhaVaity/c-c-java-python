checkEven = lambda No : (No%2 ==0)
Increase = lambda No : No+2
Add= lambda A,B: A+B  

# Task : Name of Function
# Elements : List of data elements

def filterX(Task, Elements):
    Result = []
    for no in Elements:
        if(Task(no)== True):
            Result.append(no)
    return Result

def mapX(Task, Elements):
    Result = []
    for no in Elements:
        Ret = Task(no)
        Result.append(Ret)
    return Result

def reduceX(Task, Elements):
    Sum = 0 
    for no in Elements:
        Sum = Task(Sum,no)    
    return Sum

def main():
    Data = []

    print("Enter Number of Element: ")
    Size = int(input())

    print("Enter the elements: ")
    for i in range(Size):
        Value = int(input())
        Data.append(Value)

    print("Input Data: ",Data )
   

    output = list(filterX(checkEven,Data))
    print("Output after Filter: ",output)

    moutput = list(mapX(Increase,output))
    print("Output after Map: ",moutput)

    result = reduceX(Add,moutput)
    print("Output after Reduce: ",result)

if __name__=="__main__":
    main()