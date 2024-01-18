def Display(Name, Age, Marks=90):
    print("Name is : ", Name)
    print("Age is : ", Age)
    print("Marks are: ", Marks)



def main():
    print("Demonstration of Default Arguments")

    Display("Amit", 25, )

    Display("Sagar", 21, 78)



if __name__ == "__main__":
    main()

