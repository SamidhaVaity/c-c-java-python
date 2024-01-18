def Addition(No1, No2):
    Ans = 0
    Ans = No1 + No2
    return Ans

def Substraction(No1, No2):
    Ans = 0
    Ans = No1 - No2
    return Ans

def main():
    value1 = int(input("Enter first Number: "))
    value2 = int(input("Enter second Number: "))

    Ret = Addition(value1, value2)
    print("Addition is: ", Ret)

    Ret = Substraction(value1, value2)
    print("Substraction is: ", Ret)

if __name__ == "__main__":
    main()