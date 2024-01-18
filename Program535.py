class Numbers:

    def __init__(self,Value):
        self.No = Value

    def  chkprime(self,Value):
        if self.No > 1:
            for i in range(2, self.No//2):
                if (self.No % i) == 0:
                    print("False")
                    break
            else:
                print("True")
        else:
            print("False")

    def chkPerfect(self,Value):
        Sum = 0
        for i in range(1, self.No):
            if(self.No % i == 0):
                Sum = Sum + i
        if (Sum == self.No):
            print(" %d is a Perfect Number" , self.No)
        else:
            print(" %d is not a Perfect Number", self.No)

    def sumfactors(self,Value):
        s=0
        for i in range(1,self.No+1):
            if self.No%i==0 :
                s += i
        return s
    
    def Factors(self,Value):
        for i in range (1,self.No,1):
            if(self.No % i == 0):
                print(i)


def main():
    Obj1 = Numbers(12)
    Obj1.chkPerfect()

    Obj2 = Numbers(64)
    Obj2.Factors()

    Obj3 = Numbers(27)
    Obj3.sumfactors()

    Obj4 = Numbers(29)
    Obj4.chkprime()



if __name__ == "__main__":
    main()

    