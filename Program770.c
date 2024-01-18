#include<stdio.h>

template<class T>

void Display(T Value, int iSize)
{
    int iCnt = 0;
    for(iCnt =1; iCnt<=iSize; iCnt++)
    {
        printf("%c\t",Value);
    }
        printf("\n");
    for(iCnt =1; iCnt<=iSize; iCnt++)
    {
        printf("%d\t",Value);
    }
        printf("\n");
    for(iCnt =1; iCnt<=iSize; iCnt++)
    {
        printf("%f\t",Value);
    }
        printf("\n");
}
int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7f,6);
    return 0;
}