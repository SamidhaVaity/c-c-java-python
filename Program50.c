#include<stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;

    while(iNo > 0)
    {
        printf("--------------------------------------\n");
        iDigit = iNo % 10;
        printf("Digit is : %d\n",iDigit);
        iNo = iNo/10;
        printf("Number is : %d\n", iNo);
        iCnt ++;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);
    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}