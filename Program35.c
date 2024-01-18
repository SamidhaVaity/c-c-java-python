#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt =iNo; iCnt=>1; iCnt--)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue =0;

    printf("Enter number of time you want to display \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}