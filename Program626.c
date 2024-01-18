//////////////////////////////////////////////////////////////////////////
//  Function Name :     N Number
//  Description :       It is use to get difference between even numbers and odd numbers of array
//  Input Arguments :   integer
//  Output :            interger
//  Author :            Samidha Narendra Vaity
//  Date :              24/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt=0, iSum = 0, iAdd = 0;

    for(iCnt =0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]%2 ==0)
        {
            iSum = iSum + Arr[iCnt];
        }
        if(Arr[iCnt]%2 !=0)
        {
            iAdd = iAdd + Arr[iCnt];
        }
    }
    return iSum-iAdd;
}

//////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    int iSize =0, iRet=0, iCnt=0;
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

    iRet = Difference(p, iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0;
}