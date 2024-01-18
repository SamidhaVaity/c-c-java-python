def prime(no):

    if no > 1:
        for i in range (2, no):
            if (no % i) == 0:
                print("It is not a prime number")
                break
        else:
            print("It is a prime number")

    else:
        print("It is not a prime number")


def main():
    value = int(input("Enter one number: "))
    prime(value)


if __name__ == "__main__":
    main()