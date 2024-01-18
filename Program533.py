class Arithmetic:

    def __init__(self, Value1, Value2):
        self.No1 = Value1
        self.No2 = Value2

       
    def Addition(self,Value1, Value2):
        return self.No1+self.No2

    def Subtraction(self,Value1, Value2):
        return self.No1-self.No2

    def Multiplication(self,Value1, Value2):
        return self.No1*self.No2
    
    def Division(self,Value1, Value2):
        return self.No1/self.No2




def main():
    V1 = int(input("Enter First No :"))
    V2 = int(input("Enter First No :"))

    Obj  = Arithmetic(3,4)

    Obj.Addition()
    Obj.Subtraction()
    Obj.Multiplication()
    Obj.Division()


if __name__ == "__main__":
    main()
