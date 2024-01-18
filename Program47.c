#include<stdio.h>

void Dsiplay(int iNo)
{
    int iDigit = 0;
    printf("VAlue of iNo is %d\n",iNo);
    printf("-------------------------------------------\n");

    iDigit = iNo % 10;
    printf("Digit is : %d\n", iDigit);
    iNo = iNo/10;  //72
    printf("Value of No is : %d\n", iNo);
    printf("-------------------------------------------\n");

    iDigit = iNo % 10;
    printf("Digit is : %d\n", iDigit);
    iNo = iNo/10;  //72
    printf("Value of No is : %d\n", iNo);
    printf("-------------------------------------------\n");

    iDigit = iNo % 10;
    printf("Digit is : %d\n", iDigit);
    iNo = iNo/10;  //0
    printf("Value of No is : %d\n", iNo);
    printf("-------------------------------------------\n");

}

int main()
{
    int iValue = 721;

    //printf("Enter number :\n");
    //scanf("%d",&iValue);

    Dsiplay(iValue);

    return 0;
}