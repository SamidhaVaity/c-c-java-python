#include<stdio.h>

void DisplayI()
{
    int iCnt = 1;

    while(iCnt<=4)
    {
        printf("Jay Ganesh....\n");
        iCnt++;
    }
}

void DisplayR()
{
    int iCnt = 1;

    if(iCnt<=4)
    {
        printf("Jay Ganesh....%d\n",iCnt);
        iCnt++;
        DisplayR();
    }
}

int main()
{
    DisplayR();

    return 0;
}