#include<stdio.h>

int Manimum(int iNo1, int iNo2)
{
    if ( iNo1 > iNo2)
    {
        return iNo2;
    }
    else 
    {
        return iNo1;
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);
    printf("Enter Second number : \n");
    scanf("%d",&iValue2);

    iRet = Manimum(iValue1, iValue2);

    printf("Smallest number is : %d\n",iRet);

    return 0;
}