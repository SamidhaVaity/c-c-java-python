i = 0
def DisplayF():
    global i
    print("Inside Fun",i)
    i+=1
    DisplayF()

def main():
    DisplayF()


if __name__=="__main__":
    main()