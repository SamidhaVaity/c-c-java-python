# accepts   parameters as another function
def Add(A, B): #0x000001ED08BE04A0
    return A+B

def Sub(A,B):
    return A-B

def Marvellous(FPTR):
    Ans = FPTR(11,7)
    print(FPTR)
    print(type(FPTR))
    print("Addition is: ", Ans)

    


def main():
   Marvellous(Add) #0x000001ED08BE04A0

    
    


if __name__=="__main__":
    main()