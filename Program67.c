#include<stdio.h>
#include<stdlib.h>

int Addition(int Arr[], int iSize)
{
    
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        iSum = iSum+Arr[iCnt];
    }
    return iSum;
}
int main()
{
    int iCount = 0, iCnt = 0;
    int iRet = 0; 
    int *ptr = NULL;

    printf("Enter the number of elements you want to enter : \n");
    scanf("%d",&iCount);

    ptr = (int*)malloc(iCount*sizeof(int));
    printf("Dynamic memory gets allocated succesfully for %d elements\n",iCount);

    printf("Enter the %d values: \n",iCount);

    for(iCnt=0; iCnt<iCount; iCnt++)
    {
        printf("\n Enter the element no %d: ",iCnt+1);

        scanf("%d",&ptr[iCnt]);
    }

    iRet = Addition(ptr, iCount);
    printf("Addition of number is : %d\n",iRet);

    printf("Dynamic memory gets deallocated succesfully...\n");
    free(ptr);

    return 0;
}