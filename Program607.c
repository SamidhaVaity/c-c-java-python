//////////////////////////////////////////////////////////////////////////
//  Function Name :     Area of Rectangle
//  Description :       It is use get area of Rectangle
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              19/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#define PI 3.14

double RectArea(float fWidth, float fHeight)
{
    double dAns = 0.0;
    dAns = (double)fWidth*(double)fHeight;
    return dAns;

}

//////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter Width : \n");
    scanf("%f",&fValue1);

    printf("Enter Height : \n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);
    printf("%f",dRet);

    return 0;
}