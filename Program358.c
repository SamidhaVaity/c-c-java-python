#include<stdio.h>

void DisplayI(int iNo)
{
    int iCnt = 1;

    while(iCnt<=iNo)
    {
        printf("%d\n",iCnt);
        iCnt++;
    }
}

void DisplayR(int iNo)
{
    static int iCnt =1;

    if(iCnt<=iNo)
    {
        printf("%d\n",iCnt);
        iCnt++;
        DisplayR(iNo);
    }
}

int main()
{
    DisplayR(6);

    return 0;
}