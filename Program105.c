#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter the character : \n");
    scanf("%c",&ch);

    printf("ASCII value of the character DECIMAL is : %d\n",ch);
    printf("ASCII value of the character OCTAL is : %o\n",ch);
    printf("ASCII value of the character HEXADECIMAL : %x\n",ch);

    return 0;
}