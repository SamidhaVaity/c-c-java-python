#include <stdio.h>
#include <stdlib.h>

template <class T>

void Reverse(T *arr, int iSize)
{
    int i = 0;
    int j = iSize-1;
    int temp = 0;

    while(i<j)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j]=temp;
        i++;
        j--;
    }

    for(i=0; i<iSize; i++)
    {
        cout<<arr[i]<<"\t";
    }

    
}
int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    for(int i=0; i<9;i++)
    {
        cout<<arr[i];
    }

    Reverse(arr,9);

    return 0;
}