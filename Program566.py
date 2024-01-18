import psutil

def ProcessInfo(ProcessName):
    
    for proc in psutil.process_iter():
        try:
            if ProcessName.lower() in proc.name().lower():
                return True
        except (psutil.NoSuchProcess,psutil.AccessDenied,psutil.ZombieProcess):
            pass
    return False

def main():
    print("Python automation & machine learning")

    print("Aplication name : Display information on running process")

    Name = input("Enter the name of process you are searching :")

    if ProcessInfo(Name):
        print("Yes , the process is running")
    else:
        print("The process you are searching is not running")

if __name__=="__main__":
    main()