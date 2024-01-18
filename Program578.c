//////////////////////////////////////////////////////////////////////////
//  Function Name :     Factors
//  Description :       It is use to get even factors
//  Input Arguments :   integer
//  Output :            integer
//  Author :            Samidha Narendra Vaity
//  Date :              12/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayEvenFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    } 

    for(i =1; i<=(iNo/2); i++)
    {
        if((i%iNo)==0 && (i%2)==0)
        {
            printf("%d\n",i);
        }
    }

}

//////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////////////


int main()
{
    int iValue = 0;

    printf("Enter Number : \n");

    scanf("%d\n",&iValue);

    DisplayEvenFactor(iValue);

    return 0;
}