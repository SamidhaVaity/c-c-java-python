
def main():
    value = int(input("Enter the count: "))

    for i in range (1,value+1):
        for i in range (1,value+1):
            print(i, end='')
        print()

if __name__=="__main__":
    main()