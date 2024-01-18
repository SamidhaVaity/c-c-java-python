#include<stdio.h>

void DisplayR(int Arr[], int iSize)
{
    int iCnt =0;
    for(iCnt=0; iCnt<=iSize; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }
}

int main()
{
    int Arr[5] = {10,20,30,40,50};

    DisplayR(Arr,5);

    return 0;
}