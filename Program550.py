
def sumdigit(No):
    if No == 0:
        return 0
    return (No%10 +  sumdigit(int(No/ 10)))



def main():
    Value = int(input("Enter first number : "))
    Ret = sumdigit(Value)
    print(Ret)

if __name__=="__main__":
    main()