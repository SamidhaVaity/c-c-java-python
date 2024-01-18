# accepts  multiple parameters & return multiple parameter
def Marvellous(Value1, Value2):
   Addition = Value1 + Value2
   Substraction = Value1-Value2
   Multiplication = Value1*Value2

   return Addition, Substraction, Multiplication


def main():
    Ret= Marvellous(11,6)
    print("Addittion is :", Ret[0])
    print("Substraction is :", Ret[1])
    print("Multiplication is :", Ret[2])
    


if __name__=="__main__":
    main()