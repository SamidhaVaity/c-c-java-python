#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char cValue)
{
    if((cValue >='A')&&(cValue <='Z'))
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

    bRet = CheckCapital(ch);
    if(bRet == 1)
    {
        printf("The Character is Capital");
    }
    else
    {
        printf("The Character is not Capital");
    }
    return 0;
}