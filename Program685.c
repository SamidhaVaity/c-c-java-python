#include<stdio.h>


void DisplaySchedule(char ch)
{ 
    if((ch =='A')||(ch =='a'))
    {
        printf("Your Exam at 7:00 AM");
    }
    else if((ch =='B')||(ch =='b'))
    {
        printf("Your Exam at 8:30 AM");
    }
    else if((ch =='C')||(ch =='c'))
    {
        printf("Your Exam at 9:20 AM");
    }
    else if((ch =='D')||(ch =='d'))
    {
        printf("Your Exam at 10:30 AM");
    }
    else
    {
        printf("Invalid Input");
    }
}
int main()
{
    char cValue = 0;

    printf("Enter the character\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

   
    return 0;
}
