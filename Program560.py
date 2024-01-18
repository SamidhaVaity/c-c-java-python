import os
from sys import *


def ChangeExtension(dir_name, file_extension, new_extension = ".doc"):
    flag = os.path.isabs(dir_name)

    if flag == False:
        dir_name = os.path.abspath(dir_name)

    exist = os.path.isdir(dir_name)

    if (exist == True):
        for foldername, subfoldername, filename in os.listdir(dir_name):
            for fname in filename:
                if os.path.isfile(fname):
                    file_name , old_extension = os.path.splitext(fname)
                    new_filename = file_name+'.'+ new_extension

def main():
    print("------------Automation Script----------------")

    print("Automation Script Name", argv[0])

    if(len(argv) != 3):
        print("Invalid number of arguments")
        exit()
    
    if(argv[1])=="-u" or (argv[1])=="-U":
        print("DirectoryRename.py Demo .txt .doc")
        exit()

    else:
        ChangeExtension(argv[1],argv[2])


if __name__=="__main__":
    main()