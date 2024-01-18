

def DisplayFactors(Value):
    for i in range (1,No,1):
        if(No % i == 0):
            print(i)

def main():
    No = 0
    print(" Enter number")
    No = int(input())
    DisplayFactors(No)

if __name__ == "__main__":
    main()