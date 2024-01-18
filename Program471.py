def Display(Name, Age, Marks):
    print("Name is : ", Name)
    print("Age is : ", Age)
    print("Marks are: ", Marks)



def main():
    print("Demonstration of Keyword Arguments")

    Display(Name ="Amit", Age =25, Marks =89)

    Display(  Marks =78 , Age =21, Name ="Sagar")



if __name__ == "__main__":
    main()

