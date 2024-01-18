
def main():
    File_Name = input("Enter the name of file you want to Read : ")
    Search_Word = input("Enter the word : ")

    fobj = open(File_Name,"r")
    Data = fobj.read()

    Word_Count = Data.lower().count(Search_Word)

    print("The word",Search_Word,"appears",Word_Count,"times.")


if __name__=="__main__":
    main()