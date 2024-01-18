# accepts more parameter & return nothing
def Marvellous(Name, Age, City):
    print("Inside MArvellous Function")
    print("Welcome: ", Name)
    print("Your age is :", Age)
    print("Your city is :", City)


def main():
    Marvellous("Amit",28,"Pune")
    Marvellous(City = "Thane", Age = 30, Name = "Sagar" )



if __name__=="__main__":
    main()