#include<stdio.h>

int SumFactorW(int iNo)
{
     int iCnt =1;
     int iSum =0;

    while(iCnt<=(iNo/2))
    {
        if((iNo%iCnt)==0)
        {
            iSum = iSum+iCnt;
        }
        iCnt++;
    }
    return iSum;
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
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);


    iRet = SumFactorW(iValue);
    printf("Addition of factors is :"iRet);

    return 0;
}