#include<iostream>
using namespace std;

template<class T>
T Addition(T No1, T No2)
{
    T Ans = 0.0;
    Ans = No1+No2;
    return Ans;
}

int main()
{
    float iValue1 = 10.9, iValue2 =11.6, fRet =0.0f;
    int fValue1 = 10, fValue2 =11, iRet =0;
    double dValue1 = 18.9, dValue2 =15.6, dRet =0.0;

    iRet = Addition(iValue1,iValue2);
    cout<<"Additon is : "<<iRet<<"\n";

    fRet = Addition(fValue1,fValue2);
    cout<<"Additon is : "<<fRet<<"\n";

    dRet = Addition(dValue1,dValue2);
    cout<<"Additon is : "<<dRet<<"\n";

    return 0;
}