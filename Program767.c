#include<stdio.h>

template <class T>
T AddN(T*arr, int iSize)
{
    T Sum;

    int i = 0;
    
    for(i=0; i<iSize; i++)
    {
        Sum = Sum+arr[i];
    }
    return Sum;
}

int main()
{
    int arr[] = {10,20,30,40,50};

    float brr[] = {10.0, 3.7, 9.8, 8.7};

    int iSum = AddN(arr,5);
    printf("%d\n\n",iSum);

    float fSum = AddN(brr,4);
    printf("%f\n",fSum);
    return 0;
}