#include<stdio.h>

void DisplayExamTime(int iStandard)
{
    switch(iStandard)
    {
        case 1:
            printf("Your Exam is at 8AM\n");
            break;
        case 2:
            printf("Your Exam is at 9AM\n");
            break;
        case 3:
            printf("Your Exam is at 10AM\n");
            break;
        case 4:
            printf("Your Exam is at 11AM\n");
            break;
        case 5:
            printf("Your Exam is at 12 Noon\n");
            break;
        default :
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