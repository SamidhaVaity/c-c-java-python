
def ChkNum(No):
    
    Result = No % 2
    
    if (Result == 0):
        print("Number is even ")
    else:
        print("Number is odd ")
 
def main():
    value = int(input("Enter Number: "))

    Ans = 0
    Ans = ChkNum(value)
    


if __name__ == "__main__":
    main()

