
def main():
    Data = []

    print("Enter Number of Element: ")
    Size = int(input())

    print("Enter the elements: ")
    for i in range(Size):
        Value = int(input())
        Data.append(Value)

    print("Input Data: ",Data )

    Search = int(input("Element to search: "))
    Ans = Data.count(Search)
    print("Output: ", Ans )

if __name__ == "__main__":
    main()