//////////////////////////////////////////////////////////////////////////
//  Function Name :     N Number
//  Description :       It is use to count of frequency of no in array
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              24/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>


void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt=0, iFrequency = 0, iLast =-1;

    for(iCnt =0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]>=iStart && Arr[iCnt]<=iEnd)
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
    
}

//////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize =0, iCnt=0, iValue1=0, iValue2=0;
    int *p = NULL;

    printf("Enter number of elements ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt =0; iCnt<iSize; iCnt++)
    {
        printf("Enter elements : %d\t",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the first number ");
    scanf("%d",&iValue1);

    printf("Enter the Second number ");
    scanf("%d",&iValue2);

    Range(p, iSize, iValue1, iValue2);

    free(p);

    return 0;
}