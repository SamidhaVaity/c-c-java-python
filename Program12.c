/*
    START
        Accept number from user
        Divide that number by 2
        if remainder is 0 then display Eve
        otherwise display odd
    STOP
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{

    int iValue =0;
    bool bRet = false;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    bRet = CheckEven(iValue);
    if(bRet == true)
    {
        printf("%d is an even number\n", iValue);
    }
    else
    {
        printf("%d is an odd number\n", iValue);
    }

    return 0;
}