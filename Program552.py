import os

def main():
    File_Name = input("Enter the name of file : ")

    if os.path.exists(File_Name):
        print("File exists.")
    else:
        print("File Does not exists.")


if __name__=="__main__":
    main()
