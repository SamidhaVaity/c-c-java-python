#include<stdio.h>
#include<string.h>

void Reverse(char str[])
{
    int iCnt = 0;
    int iCount = 0;
    int end = 0;
    char revstr[20];


    while(str[iCount]!='\0')
    {
        iCount++;

        end = iCount-1;

        for(iCnt = 0; iCnt<iCount; iCnt++)
        {
            revstr[iCnt] = str[end];
            end--;
        }
    }
    revstr[iCnt] = '\0';

    printf("%s\n",revstr);
    
}

int main()
{
    char arr[20];
    int iRet =0;

    printf("Enter string");
    scanf("%[^'\n]s",arr);

    Reverse(arr);

    return 0;
}