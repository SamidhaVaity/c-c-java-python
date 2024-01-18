import os
from sys import *
import shutil

def Copy_File(path, New_path = "Temps"):
    print("We are going to Display file with required extension",path)

    flag = os.path.isabs(path)

    if flag == False:
        path = os.path.abspath(path)

    exist = os.path.isdir(path)

    if not os.path.exists(New_path):
            try:
                os.mkdir(New_path)
            except:
                pass

    

    if (exist == True):
        for foldername, subfoldername, filename in os.walk(path):
            for fname in filename:
                if fname.endswith('.txt'):
                    shutil.copy(os.path.join(path,fname), New_path )

        

def main():
    print("------------Automation Script-----------------")

    print("Automation Script Name",argv[0])

    if(len(argv) != 3):
        print("Invalid Number of Input")
        exit()

    if(argv[1]=='u') or (argv[1]=='U'):
        print("DirectoryCopy Demo Temp")
        exit()

    else:
        Copy_File(argv[1],argv[2])


if __name__=="__main__":
    main()