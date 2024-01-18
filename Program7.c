// Problem statement : Accept 2 values from user and perform the addition.

//step 1 : Understand the problem statement
// Conclusion : We have to accept 2 integers and perform its addition.

//step 2 : Write the algorithm

/* 
    START
        Accept first number from user and strored it into no 1.
        Accept second number from user and strored it into no 2.
        Create one variable to store the result name as Ans.
        Perform addition of no1 & no2, store the result in Ans.
        Display the result from Ans to the user.
    STOP

*/

// Step 3: Decide the programming language(C/C++/Java/Python)
// we select C Programming

//Step 4: Write the program

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////
//
//  Function Name :     Addition
//  Description :       It is used to perform addition of 2 integers
//  Input Arguments :   Integer , Interger
//  Output :            Integer
//  Author :            Samidha Narendra Vaity
//  Date :              25/09/2023
//
///////////////////////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
// Addition is a dunction which accepts two parameter as integers and returns integer 
{
    int iSum = 0;           // Varible to store the addition
    iSum = iNo1 + iNo2;
    return iSum;

}

///////////////////////////////////////////////////////////////////////////////
//
//  Entry point function of an application which performs addition of 2 integer
//
///////////////////////////////////////////////////////////////////////////////


int main()
{
    auto int iValue1 =0;    // Variable to store first input
    auto int iValue2 = 0;   // Variable to store Second input
    auto int iAns =0;       // Variable to store result

    printf("Enter first number: \n");
    scanf("%d",&iValue1);

    printf("Enter first number: \n");
    scanf("%d",&iValue2);

    iAns = Addition(iValue1,iValue2); //Function Call to perform addition

    printf("Addition is : %d\n",iAns);
    return 0;

}

// Step 5 : Test the Code
/*
Taste Case 1 :
Inpur : 10 11
output : 21

Taste Case 2 :
Inpur : 10 0
output : 21

Taste Case 3 :
Inpur : 12 1-6
output : 21

Taste Case 4 :
Inpur : -6 -5
output : -11

*/