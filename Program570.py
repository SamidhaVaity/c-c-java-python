from sys import*
import os
import hashlib
import time

def hashfile(path,blocksize=1024):
    afile=open(path,'rb')
    hasher=hashlib.md5()
    buf=afile.read(blocksize)

    while len(buf)>0:
        hasher.update(buf)
        buf=afile.read(blocksize)
    afile.close()

    return hasher.hexdigest()

def findDup(path= "Demo"):
    flag = os.path.isabs(path )

    if flag == False:
        path = os.path.abspath(path)


    if not os.path.exists(path):
        try:
            os.mkdir(path)
        except:
            pass

    dups ={}

    if exists:
        for dirName, subdirs, fileList in os.walk(path):
            print("Current Folder is : ", dirName)
            for filen in fileList:
                path =os.path.join(dirName, filen)
                file_hash= hashfile(path)

                if file_hash in dups:
                    dups[file_hash].append(path)
                else:
                    dups[file_hash]=[path]
        
        return dups
    else:
        print("Invalid Path")

def DeleteFiles(dict1):
    results = list(filter(lambda x: len(x)>1, dict1.values()))

    icnt =0
    iFound =0

    if len(results)>0:
        for result in results:
            for subresult in result:
                icnt+=1            
                if icnt>=2:
                    os.remove(subresult)
                    iFound+=1
            icnt = 0
        
        print("Number of duplicate files found and deleted : ",iFound)
    else:
        print("No duplicate files found.")

def printResults(dict1,log_path = "Temps"):

    listprocess = []

    separator = "-"*80
    log_path = os.path.join(log_dir,"TimeLog%s.log"%(time.ctime()))
    f = open(log_path,'w')
    f.write(separator + "\n")
    f.write("Marvellous Infosystem Process Logger :"+time.ctime()+"\n")
    f.write(separator + "\n")
    f.write("\n")

    results=list(filter(lambda x :len(x)>1, dict1.values()))

    if len(results)>0:
        print("Duplicates Found:")

        print("The following files are duplicate.")
        for result in results:
            for subresult in result:
                listprocess.append(subresult)
    else :
        print("No duplicate files found")

    for element in lisprocess:
        f.write("%s\n"%element)

    print("Log file is successfully generated at location %s"%(log_path))
