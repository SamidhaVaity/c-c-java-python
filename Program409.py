
class Arithematic:
    def __init__(self,A,B):
        print("Inside Constructor")
        self.No1 = A
        self.No2 = B

    def Addition(self):
        Ans = 0
        Ans = self.No1+self.No2
        return Ans

    def Substraction(self):
        Ans = 0
        Ans = self.No1-self.No2
        return Ans 


def main():
    value1 = int(input("Enter first Number: "))
    value2 = int(input("Enter second Number: "))

    obj1 = Arithematic(value1,value2)

    ret = obj1.Addition()
    print("Addition is: ",ret)

    ret = obj1.Substraction()
    print("Addition is: ",ret)

    value1 = int(input("Enter first Number: "))
    value2 = int(input("Enter second Number: "))

    obj2 = Arithematic(value1,value2)

    ret = obj2.Addition()
    print("Addition is: ",ret)

    ret = obj2.Substraction()
    print("Addition is: ",ret)

if __name__ == "__main__":
    main()