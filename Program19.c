#include<stdio.h>

void DisplayExamTime(int iStandard)
{
    if(iStandard == 1)
    {
        printf("Your Exam is at 8AM\n");
    }
    else if(iStandard == 2)
    {
        printf("Your Exam is at 9AM\n");
    }
    else if(iStandard == 3)
    {
        printf("Your Exam is at 10AM\n");
    }
    else if(iStandard == 4)
    {
        printf("Your Exam is at 11AM\n");
    }
    else if(iStandard == 5)
    {
        printf("Your Exam is at 12 Noon\n");
    }
    else
    {
        printf("Wrong input..\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter your standard : \n");
    scanf("%d",&iValue);

    DisplayExamTime(iValue);
    return 0;
}