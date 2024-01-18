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


void Digits(int Arr[], int iLength)
{
    int iCnt=0, iDigit = 0, iCount=0;

    for(iCnt =0; iCnt<iLength; iCnt++)
    {
        while(Arr[iCnt]>0)
        {
            Arr[iCnt] = Arr[iCnt]/10;
            iCount++;
            
            if(iCount == 3)
            {
                printf("%d",Arr[iCnt]);
            }
            
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
    int iSize =0, iCnt=0;
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


    Digits(p, iSize);

    free(p);

    return 0;
}