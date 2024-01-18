
def main():
    value = int(input("Enter the count: "))

    for i in range (1, value+1):
        for j in range (1,i+1):
            print(j, end='')
        print("")

if __name__=="__main__":
    main()