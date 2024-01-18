
def Factorial(No):
    if (No == 1 or No ==0):
        return 1
    else:
        return (No*Factorial(No-1))


def main():
    Value = int (input("Enter the number : "))
    Ret = Factorial(Value)
    print(Ret)


if __name__=="__main__":
    main()