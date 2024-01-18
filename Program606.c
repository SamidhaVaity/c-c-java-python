//////////////////////////////////////////////////////////////////////////
//  Function Name :     Area of circle
//  Description :       It is use get area of circle
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              19/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    double dAns = 0;
    dAns = PI*((double)fRadius*(double)fRadius);
    return dAns;

}

//////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("%f",dRet);

    return 0;
}