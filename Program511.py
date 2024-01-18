import Arithmetic

def main():
    Value1 = int(input("Enter First No: "))
    Value2 = int(input("Enter Second No: "))

    Ans = 0

    Ans = Arithmetic.Addition(Value1, Value2)
    print("Addition is ", Ans)

    Ans = Arithmetic.Substraction(Value1, Value2)
    print("Substraction is ", Ans)

    Ans = Arithmetic.Multiplication(Value1, Value2)
    print("Multiplication is ", Ans)

    Ans = Arithmetic.Division(Value1, Value2)
    print("Division is ", Ans)




if __name__ == "__main__":
    main()