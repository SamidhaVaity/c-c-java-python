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

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt=0, iFrequency = 0;

    for(iCnt =0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
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
    int iSize =0, iCnt=0, iValue=0;
    int *p = NULL;
    BOOL bRet = FALSE;

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

    printf("Enter the number ");
    scanf("%d",&iValue);

    bRet = Check(p, iSize, iValue);

    if (bRet == TRUE)
    {
        printf("Number is Present");
    }
    else 
    {
        printf("Number is not Present");
    }

    free(p);

    return 0;
}