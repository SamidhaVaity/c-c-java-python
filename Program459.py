# accepts   parameters as another function
def Add(A, B):
    return A+B

def Sub(A,B):
    return A-B

def Marvellous(FPTR):
    Ans = FPTR(11,7)
    print(type(FPTR))
    print("Addition is: ", Ans)

    


def main():
   Marvellous(Add)

    
    


if __name__=="__main__":
    main()