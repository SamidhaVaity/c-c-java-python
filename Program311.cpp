#include<iostream>
using namespace std;

class Array 
{
    public:
        int *Arr;
        int Size;
    
        Array(int Length);
        ~Array();
        void Accept();
        void Display();
        int Addition();
        
}; 

int Array::Addition()
{
    int Sum = 0, iCnt = 0;

    for(iCnt =0; iCnt<Size; iCnt++)
    {
        sum = sum+Arr[iCnt];
    }
    return sum;
}
Array::Array(int Length)
{
    Size = Length;
    Arr = new int[Size];
}

Array::~Array()
{
    delete []Arr;
}

void Array::Accept()
{
    cout<<"Enter the elements : \n";
    int iCnt = 0;

    for(iCnt=0; iCnt<Size; iCnt++)
    {
        cin>>Arr[iCnt];
    }
}

void Array::Display()
{
    cout<<"Elements of the array : \n";
    int iCnt = 0;

    for(iCnt=0; iCnt<Size; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}
int main()
{
    Array obj(5);
    int Ret = 0;

    obj.Accept();
    obj.Display();
    Ret = obj.Addition();

    return 0;
}