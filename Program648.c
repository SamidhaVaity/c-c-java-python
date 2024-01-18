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


int LastOcc(int Arr[], int iLength, int iNo)
{
    int iCnt=0, iFrequency = 0, iLast =-1;

    for(iCnt =0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            if (iLast = -1);
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
    int iRet = 0;

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

    iRet = LastOcc(p, iSize, iValue);

    if (iRet == -1)
    {
        printf("There is no such number");
    }
    else 
    {
        printf("First Occurence of number is %d",iRet);
    }

    free(p);

    return 0;
}