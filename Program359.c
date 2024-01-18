#include<stdio.h>

void Factors(int iNo)
{
    int iCnt = 1;

    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
    }
}

void FactorW(int iNo)
{
     int iCnt =1;

    while(iCnt<=(iNo/2))
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
    }
}

void FactorR(int iNo)
{
    static int iCnt =1;

    if(iCnt<=(iNo/2))
    {
        if((iNo%iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
        FactorR(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);


    Factors(iValue);
    FactorW(iValue);
    FactorR(iValue);

    return 0;
}