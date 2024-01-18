#include<stdio.h>

#define TRUE 1
#define FALSE 2

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    

    while(*str != '\0')
    {
        if((*str == 'A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U')||(*str == 'A')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
        {
            return TRUE;
        }
        
        str++;
        
    }
}

int main()
{
    char arr[20];
    BOOL bRet =FALSE;

    printf("Enter string");
    scanf("%[^'\n]s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }


    return 0;
}