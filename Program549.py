import sys

i = 2
def Display(no):
    global i 
    if (i<=no):
        print(no-i,end = " ")
        i+=1
        Display(no)


def main():
    Display(6)

if __name__=="__main__":
    main()