#include<stdio.h>

void DisplayR(int iNo)
{

    if(iNo>=1)
    {
        printf("%d\n",iNo);
        iNo--;
        DisplayR(iNo);
    }
}

int main()
{
    DisplayR(4);

    return 0;
}