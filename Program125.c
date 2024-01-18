#include<stdio.h>

int CountSpace(char str[])
{
    int iCnt = 0;

    while(*str !='\0')
    {
        if(*str ==' ')
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
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^'\n']s",Arr);

    iRet = CountSpace(Arr);

    printf("Frequency of space in string is : %d\n",iRet);

    return 0;
}