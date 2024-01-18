#include<stdio.h>

void Dsiplay(int iNo)
{
    int iDigit = 0;
    //joparent iNo 0 peksha motha toparent fira
    while(iNo > 0)
    {
        printf("--------------------------------------\n");
        iDigit = iNo % 10;
        printf("Digit is : %d\n",iDigit);
        iNo = iNo/10;
        printf("Number is : %d\n", iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    Dsiplay(iValue);

    return 0;
}