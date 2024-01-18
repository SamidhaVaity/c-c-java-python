import psutil
from sys import *
import os
import time

def ProcessInfoLog(log_dir = "Demo"):

    listprocess = []

    if not os.path.exists(log_dir):
        try:
            os.mkdir(log_dir)
        except:
            pass

    separator = "*"*80
    log_path = os.path.join(log_dir,"MarvellousLog%s.Log"%(time.ctime()))
    f = open(log_path,'w')
    f.write(separator ="\n")
    f.write("Marvellous Infosystems Process Logger : "+time.ctime()+"\n")
    f.write(separator + "\n")

    for proc in psutil.process_iter():
        try:
            pinfo = proc.as_dict(attrs = ['pid','username','name'])
            listprocess.append(pinfo)
        except (psutil.NoSuchProcess,psutil.AccessDenied,psutil.ZombieProcess):
            pass
    
    for elem in listprocess:
        f.write("%s\n" % elem)

def main():
    print("Python automation & machine learning")

    print("Application name : LogFile Automation")

    if(argv[1] =='-u') or (argv[1] =='-U'):
        print("ProcInfoLog.py Demo")
        exit()

    ProcessInfoLog()

if  __name__ == "__main__":
    main()