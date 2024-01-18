class Bookstore:

    NoofBooks = 0

    def __init__(self,Name,Author):
        self.bookname = Name
        self.bookauthor = Author

    @classmethod
    def noofbooks(cls):
        NoofBooks = cls.NoofBooks + 1
        return NoofBooks

    def Display(self):
        print(self.bookname,self.bookauthor,"No of Books",(self.NoofBooks+1))
               

def main():
    obj1 = Bookstore("Linux programming System", "by Robert Love")
    obj1.Display()

    obj2 = Bookstore("C Programming", "by Dennis Ritchie")
    obj2.Display()

if __name__=="__main__":
    main()