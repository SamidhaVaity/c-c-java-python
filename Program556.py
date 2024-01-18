import os

def main():
    File_Name = input("Enter the name of file you want to read : ")

    if os.path.exists(File_Name):
        fobj = open(File_Name,"r")
        if fobj:
            print("File successfully open in read mode")

            print("Data from file is")

            for line in fobj:
                print(line)

                fobj.close
        else:
            print("Unable to open the file")
    else:
        print("There is no such file")



if __name__== "__main__":
    main()