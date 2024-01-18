#########################################################################################
## take input as name of directory & time interval from user
## create a logfile to maintain name of duplicated deleted filed
## with the help of checksum delete duplicate file
## in every specific time interval send mail 
## create modules for functionality
#########################################################################################
import os
import time
import psutil
import  urllib.request
import smtplib
import schedule
import hashlib
from sys import *
from email import encoders
from email.mime.text import MIMEText
from email.mime.base import MIMEBase
from email.mime.multipart import MIMEMultipart

def us_connected():
    try:
        urllib.request.urlopen('http://216.58.192.142', timeout=2)
        return True
    except urllib.request.URLError as err:
        return False

def MailSender(filename,time):
    try:
        fromaddr = "samidhavaity@gmail.com"
        email_password = "zxnszhgryezenbua"
        toaddt = str(argv[4])

        msg = MIMEMultipart()

        msg['From'] = fromaddr

        msg['To'] = toaddr

        body = """
        Hello %s,
        Welcome to Marvellous Infosystems.
        Please find attached document which contains Log of Deleteted duplicate  process by every 50 mins.
        Log file is created at : %s    

        This is auto gennerated mail.

        Thanks & Regards,
        Samidha Narendra Vaity
        Marvellous Infosystems
        """%(toaddr,time)

        Subject = """
        Marvellous Infosystems Duplicate Process log Deleted at : %s
        """%(time)

        msg['Subject'] = Subject

        msg.attach(MIMEText(body,'plain'))

        attachment = open(filename,"rb")

        p = MIMEBase('application','octet-stream')

        p.set_payload((attachment).read())

        encoders.encode_base64(p)

        p.add_header('Content-Disposition',"attachment; filename= %s" % filename)

        msg.attach(p)

        s = smtplib.SMTP('smtp.gmail.com',587)  

        s.starttls()

        s.login(fromaddr,email_password)    

        text = msg.as_string()

        s.sendmail(fromaddr,toaddr,text)

        s.quit()

        print("Log file successfully sent through Mail")

    except Exception as E:
        print("Enable to Send through Mail",E)

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



#########################################################################################
##
##  Entry point function
##
#########################################################################################

def main():
    print(" -----------Python automation & machine learning----------------")

    print("Applicate Name :", argv[0])

    if len((argv)!= 5):
        print("Invalid Number of argument")
        exit()
    
    if (argv[1] =='-h') or (argv[1]=='-H'):
        print("Help : Delete Duplicate files ")
        exit()

    if (argv[1]=="-u" or argv[1]=="-U"):    
        print("Usage : Application Name absolutepath_of_Directory")
        exit()

    try:
        schedule.every(int(argv[1])).minutes.do(RemoveProcessLog)
        while True:
            schedule.run_pending()
            time.sleep(1)

    except ValueError:
        print("Error: Invalid datatype of input")

    except Exception as E:
        print("Error: Invalid input",E)


if __name__ == "__main__":
    main()