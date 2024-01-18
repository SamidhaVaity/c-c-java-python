
def main():
    Data = []

    print("Enter Number of Element: ")
    Size = int(input())

    print("Enter the elements: ")
    for i in range(Size):
        Value = int(input())
        Data.append(Value)

    print("Input Data: ",Data )

    Ret = max(Data)
    print("Output: ", Ret)

if __name__ == "__main__":
    main()