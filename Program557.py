from sys import *
import os

def DisplayFile(Name):
    print("We are going to Display file with required extension",Name)

    flag = os.path.isabs(Name)

    if flag == False:
        Name = os.path.abspath(Name)

    exist = os.path.isdir(Name)

    if (exist == True):
        for foldername, subfoldername, filename in os.walk(Name):
            for fname in filename:
                if fname.endswith('.txt'):
                    print(fname)
    else:
        print("Invalid Path")  

def main():

    print("-----------Automation Script----------------")

    print("Automation Script name :", argv[0])

    if(len(argv) != 2):
        print("Invalid number of arguments")
        exit()

    if (argv[1]=="-u" or argv[1]=="-U"):    # Flag for displaying usage
        print("Usage : DirectoryFileSearch.py")
        print("Example: Demo .txt")
        exit()

    else:
        
        DisplayFile(argv[1])


if __name__=="__main__":
    main()