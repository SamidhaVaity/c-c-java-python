#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char cValue)
{
    if((cValue >='a')&&(cValue <='z'))
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character : \n");
    scanf("%c",&ch);

    bRet = CheckSmall(ch);
    if(bRet == 1)
    {
        printf("The Character is Small letter\n");
    }
    else
    {
        printf("The Character is not Small letter\n");
    }
    return 0;
}