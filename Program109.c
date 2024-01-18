#include<stdio.h>
#include<stdbool.h>

char ConvertSmall (char cValue)
{
    return cValue +32;
}

int main()
{
    char ch = '\0';
    char cRet = '\0';

    printf("Enter the character : \n");
    scanf("%c",&ch);

    cRet = ConvertSmall(ch);

    printf("Converted Small letter is :%c\n",cRet);

    return 0;
}