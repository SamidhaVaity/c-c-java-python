#include<stdio.h>

void DisplayI()
{
    int iCnt = 1;

    while(iCnt<=5)
    {
        printf("*\n");
        iCnt++;
    }
}

void DisplayR()
{
    static int iCnt = 0;

    while(iCnt<=5)
    {
        printf("*\n");
        iCnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR();

    return 0;
}