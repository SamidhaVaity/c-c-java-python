#include<stdio.h>

int Counta(char str[], char ch)
{
    int iCnt = 0;

    while(*str !='\0')
    {
        if(*str ==ch)
        {
            iCnt++;
        }
        
        str++;
    }
    return iCnt++;
}
int main()
{
    char Arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the character for frequency calculation : \n");
    scanf(" %c",&cValue);

    iRet = Counta(Arr,cValue);

    printf("Count of letter a in string is : %d\n",iRet);

    return 0;
}