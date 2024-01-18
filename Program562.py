import os
from sys import *
import hashlib

def hashfile(path,blocksize=1024):
    fd=open(path,'rb')
    hasher=hashlib.md5()
    buf=fd.read(blocksize)
    while len(buf)>0:
        hasher.update(buf)
        buf=fd.read(blocksize)
    fd.close()
    return hasher.hexdigest()

def FindDuplicate(path):
    flag = os.path.isabs(path)

    if flag == False:
        path = os.path.abspath(path)
    exist = os.path.isdir(path)

    dups = {}
    if exist:
        for dirname, subdirs, filenames in os.walk(path):
            for fname in filenames:
                path = os.path.join(dirname, fname)
                file_hash = hashfile(path)
                if file_hash in dups:
                    dups[file_hash].append(path)
                else:
                    dups[file_hash]=[path]
        
        return dups
    else:
        print("Invalid Path")

def PrintDuplicate(dict1):
    results=list(filter(lambda x: len(x)>1, dict1.values()))

    if len(results)>0:
        print("Duplicates Found:")

        print("The following files are identical.")

        icnt = 0,
        for result in results:
            for subresult in result:
                icnt+=1
                if icnt>=2:
                    print('\t\t%s'%subresult)
    else :
        print("No duplicate files found")

def main():
    print("------Marvellous Infosystem by Piyush Khairnar----------")

    print("Application Name: Duplicate file checking")

    if(len(argv) != 2):
        print("Invalid numbers of arguments")

    if(argv[1]=="-h")or(argv[1]=="-H"):
        print("This Script is used to traverse specific directory")
        exit()
    
    if(argv[1]=="-u")or(argv[1]=="-U"):
        print("Usage - ApplicationName AbsolutePath_of_Directory")
        exit()
    
    try:
        arr = {}
        arr = FindDuplicate(argv[1])
        PrintDuplicate(arr)
    
    except ValueError:
        print("Error: Invalid data type of Input")

if __name__ == "__main__":
    main()