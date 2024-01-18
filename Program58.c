#include<stdio.h>   //for printf & scanf
#include<stdlib.h>  //for malloc & free

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter the number of elements: \n");
    scanf("%d",&iCount);

    ptr = malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    
    for(iCnt = 0; iCnt<iCount; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("You Entered elements : \n");
    for(iCnt = 0; iCnt<iCount; iCnt++)
    {
        printf("%d\t",ptr[iCnt]);
    }
    return 0;
}