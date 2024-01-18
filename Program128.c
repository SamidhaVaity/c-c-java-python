#include<stdio.h>

void strlwrX(char str[])
{
    int iCnt = 0;

    while(*str !='\0')
    {
        if(*str>='A' && *str<='Z')
        {
            *str = *str+32;
        }
        str++;
    }
}
int main()
{
    char Arr[20];

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("Updated string is : %s\n",Arr);

    return 0;
}