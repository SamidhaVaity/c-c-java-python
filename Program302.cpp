#include<iostream>
using namespace std;

class Arithematic
{
    public:
    int No1; 
    int No2;

    Arithematic(int A, int B);
    int Addition();
    int Substraction();
};

Arithematic ::Arithematic(int A, int B)
    {
        this->No1 = A;
        this->No2 = B;
    }

int Arithematic :: Addition()
{
    int Ans = 0;
    Ans = No1+No2;
    return Ans;
}

int Arithematic :: Sustraction()
{
    int Ans = 0;
    Ans = No1+No2;
    return Ans;
}

int main()
{
    Arithematic obj(11,10);
    int Ret = 0;

    Ret = obj.Addition();
    cout<<"Addition is : "<<Ret<<"\n"; 

    return 0;
}