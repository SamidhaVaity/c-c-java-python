import sys 

i = 0
def Display(no):       
    global i 
    if (i<=no):
        print("*" ,end = " ") 
        i+=1   
        Display(no)
        
def main():
    Display(5)

if __name__=="__main__":
    main()