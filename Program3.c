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

int main()
{
    int i, j, k;
    printf("Enter first number: \n");
    scanf("%d",&i);

    printf("Enter first number: \n");
    scanf("%d",&j);

    k = i+j;

    printf("Addition is : %d\n",k);

    return 0;

}