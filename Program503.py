def Add(No1,No2):
    Result = 0
    Result = No1+No2
    return Result 

def main():
    Value1 = int(input("Enter First No: "))
    Value2 = int(input("Enter Second No: "))
    Ans = 0
    Ans = Add(Value1,Value2)

    print(Ans)

if __name__ == "__main__":
    main()   
    