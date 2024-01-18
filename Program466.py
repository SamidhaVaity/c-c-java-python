class HDFC:
    ROI = 9.5       #class Variable

    def __init__(self,Name,Amount):      # constructor   
        self.AccountHolder = Name
        self.Balance = Amount       # Instance variable
        print("Welcome",self.AccountHolder)
        print("Your Accounts gets succesfully created with initial balance: ", self.Balance)
    
    def DisplayBalance(self):        # Insatance Method
        print("Hello",self.AccountHolder) 
        print("Your account is : ",self.Balance)

    @classmethod                    # class method
    def DisplayBankInfo(cls):
        print("Welcome to HDFC bank portal")
        print("Out BAnk is Pvt Ltd Bank")
        print("We Provide the rate of intrest on saving account is ",cls.ROI)

    @staticmethod
    def DisplayKYCInfo():
        print("According to rules of RBI you should provide below documents for KYC")
        print("Your Adhar Card")
        print("Your Pan Card")
        print("Your Passport size photo")


    def Withdraw(self, Amount):     # Instance Method
        if self.Balance < Amount:
            print("There is no sufficient balance")
        else:
            self.Balance = self.Balance-Amount
            print("Amount Withdrawal Succesfully... ")
    
    def Deposite(self,Amount):         # Instance Method
        self.Balance = self.Balance + Amount
        print("Amount deposite successfully..")

def main():

    print("ROI of HDFC bank is :",HDFC.ROI)

    HDFC.DisplayBankInfo()

    HDFC.DisplayKYCInfo()
    
    print("Creating new account..")
    Amit = HDFC("Amit",5000)

    print("Creating new account..")
    Sagar = HDFC("Sagar",3000)

    print("Performing operations on Amit's Account ")
    Amit.Deposite(2000)
    Amit.DisplayBalance()

    Amit.Withdraw(1000)
    Amit.DisplayBalance()

    print("Performing operations on Sagar's Account ")
    Sagar.Deposite(4000)
    Sagar.DisplayBalance()

    Sagar.Withdraw(500)
    Sagar.DisplayBalance()

if __name__ =="__main__":
    main()    