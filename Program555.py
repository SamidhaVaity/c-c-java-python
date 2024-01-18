import os

def main():
    File_Name = input("Enter the name of file you want to Read : ")
    TFile_Name = input("Enter the name of file you want to create : ")

    fobj = open(File_Name,"r")
    Data = fobj.read()
    fobj.close()

    fobj = open(TFile_Name,"a")
    for line in Data:
        fobj.write(line)
    fobj.close()




if __name__=="__main__":
    main()