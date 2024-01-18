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

int SumFactorR(int iNo)
{
    static int iCnt =1;
    static int iSum =0;

    if(iCnt<=(iNo/2))
    {
        if((iNo%iCnt)==0)
        {
            iSum = iSum+iCnt;
        }
        iCnt++;
        SumFactorR(iNo);
    }
    return iSum;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);


    iRet = SumFactorW(iValue);
    printf("Addition of factors is %d\n:"iRet);

    iRet = SumFactorR(iValue);
    printf("Addition of factors is %d\n:"iRet);

    return 0;
}