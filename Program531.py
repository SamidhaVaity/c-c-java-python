class Demo:

    Value = 15

    def __init__(self,value1,value2):
        self.No1 = value1
        self.No2 = value2

    def Fun(self):
        print(self.No1)

    def Gun(self):
        print(self.No2)



def main():
    Obj1 = Demo(11,21)
    Obj2 = Demo(51,101)

    Obj1.Fun()
    Obj2.Fun()
    Obj1.Gun()
    Obj2.Gun()

if __name__=="__main__":
    main()