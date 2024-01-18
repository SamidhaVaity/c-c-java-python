#include <stdio.h>

template <class T>

int SearchFirst(T *arr, int iSize, T iNo)
{
    int iCnt = 0;
    int iFreq = 0;

    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        if((arr[iCnt])==iNo)
        {
            break;
        }
    }
    if(iCnt==iSize)
    {
        return -1;
    }
    else
    {
        return iCnt+1;
    }
}
int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = 0;
    iRet = SearchFirst(arr,9,10);

    printf("%d",iRet);

    return 0;
}