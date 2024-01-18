
def Factors(Value):
    Factors = []
    for i in range (1,Value+1):
        if(Value % i == 0):
            Factors.append(i)
    return sum(Factors)
        

def main():
    No = 0
    print(" Enter number")
    No = int(input())
    Ans = Factors(No)
    print(Ans)

if __name__ == "__main__":
    main()