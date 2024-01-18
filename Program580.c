//////////////////////////////////////////////////////////////////////////
//  Function Name :     Character
//  Description :       It is use convert case of characters
//  Input Arguments :   character
//  Output :            character
//  Author :            Samidha Narendra Vaity
//  Date :              12/10/2023
//////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void CheckVowel( char CValue)
{
    bool bFlag = false;

    if(CValue == a/e/i/o/u)
    {
        bFlag = true;
    }
}

//////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
//////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character\n");

    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);
    if (bRet == true)
    {
        printf("%c",True);
    }
    else
    {
        printf("%c",False);
    }

    return 0;
}