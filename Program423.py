import sys

i = 0
def Display(no):
    if (i<6):
        print(i)
        i+=1
        Display(i)


def main():
    Display(5)

if __name__=="__main__":
    main()