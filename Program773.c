#include <stdio.h>

template <class T>

int SearchLast(T *arr, int iSize, T iNo)
{
    int iPos = 0;
    int iFreq = 0;

    for(int iCnt=0; iCnt<iSize; iCnt++)
    {
        if((arr[iCnt])==iNo)
        {
            iPos=iFreq;
        }
        iCnt++
    }
    return iPos+1;
}
int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    int iRet = 0;
    iRet = SearchLast(arr,9,10);

    printf("%d",iRet);

    return 0;
}