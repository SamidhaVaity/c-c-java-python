#include<stdio.h>

void DisplayASCII()
{
    int iCnt =0;

    for(iCnt = 1; iCnt<=127; iCnt++)
    {
        printf("%c\t%d\t%o\t%x\t\n",iCnt,iCnt,iCnt,iCnt);
    }
}
int main()
{

    DisplayASCII();

    return 0;
}