#include<stdio.h>

void struprx(char *str)
{
    int iCnt = 0;

    
    while(*str != '\0')
    {
        if((*str >= 'a')&&(*str<='z'))
        {
           *str = *str - 32;
        }
        str++;
        
    }
}

int main()
{
    char arr[20];
    int iRet =0;

    printf("Enter string");
    scanf("%[^'\n]s",arr);

    struprx(arr);

    printf("Updated string is : %s\n",arr);

    return 0;
}