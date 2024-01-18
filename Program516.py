
def main():
    value = int(input("Enter the count: "))

    for i in range (value+1,0,-1):
        for j in range (0, i-1):
            print('*', end='')
        print("")

if __name__=="__main__":
    main()