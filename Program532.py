class Circle:

    PI = 3.14

    def __init__(self,Radius):
        self.value = Radius
        
    def Accept(self,Radius):
        self.value = Radius

    @classmethod
    def CalculateArea(cls): 
        return cls.PI*self.value*self.value
        
    @classmethod
    def CalculateCircumference(cls): 
        return 2*cls.PI*self.value

    def Display(self):
        print("Radius of circle is :",self.value)
        print("Area of circle is :", (C.CalculateArea))
        print("Circumference of circle is :",(C.CalculateCircumference))

def main():

    r = float(input("Enter radius "))
    C = Circle(r)
    C.Display()



if __name__=="__main__":
    main()
