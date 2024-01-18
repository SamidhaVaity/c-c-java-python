// PRoblem statement : Accept radious from user and calculate are of circle

//step1 : Understand the problem statement 
// Conclusion : we are going to use formula as P*R*R

// step 2: Algorithm
/*
    Start
        Accept radious from user and store it into Radius
        Create variable as PI and store value 3.14
        Calculate area PI*Radius*Radius
        Displau the value of Area to the user
    Stop
*/

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Calculate area
//  Description :       It is used to calculate area of circle
//  Input Arguments :   float
//  Output :            float
//  Author :            Samidha Narendra Vaity
//  Date :              02/10/2023
//
///////////////////////////////////////////////////////////////////////////////

# define PI 3.14
int CalculateArea(float fNo1)
{
    float fAns = 0.0f;
    
    fAns = PI * fNo1  * fNo1;
    return fAns;
}
    
/////////////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
/////////////////////////////////////////////////////////////////////////////////

int main()
{
    float fRadius = 0.0f;
    float fArea = 0.0f;

    printf("Enter the radius of circle : \n");
    scanf("%f",&fRadius);

    fArea = CalculateArea(fRadius);
    printf("Area of circle is %f\n :",fArea);

    return 0;
}