
def main():
    File1_Name = input("Enter the name of file you want to Read : ")
    File2_Name = input("Enter the name of file you want to Read : ")

    fobj1 = open(File1_Name,"r")
    fobj2 = open(File2_Name,"r")

    Data1 = fobj1.readlines()
    Data2 = fobj2.readlines()

    if Data1 == Data2:
        print("Success")
    else:
        print("Failure")




if __name__=="__main__":
    main()