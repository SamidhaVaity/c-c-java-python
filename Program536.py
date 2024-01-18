class BankAccount:

    ROI = 10.5

    def __init__(self, Amount):
        self.Balance = Amount

    def Deposite(self, Amount):
        self.Balance = self.Balance + Amount
        print("Amount deposite successfully..")

    def Withdraw(self, Amount):     
        if self.Balance < Amount:
            print("There is no sufficient balance")
        else:
            self.Balance = self.Balance-Amount
            print("Amount Withdrawal Succesfully... ")
    
    @classmethod
    def CalculateIntrest(cls):
        return cls.ROI * self.Balance

    def DisplayBalance(self):       
        print("Your account is : ",self.Balance)




def main():

    Obj1 = BankAccount(5000)
    Obj1.DisplayBalance()
    Obj1.Deposite()
    Obj1.DisplayBalance(7000)
    Obj1.CalculateIntrest(8000)
    Obj1.Withdraw(2000)


if __name__=="__main__":
    main()