#include<stdio.h>

int CountVowel(char str[])
{
    int iCnt = 0;

    while(*str !='\0')
    {
        if((*str =='A')||(*str =='E')||(*str =='I')||(*str =='O')||(*str =='U'))
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

    iRet = CountVowel(Arr);

    printf("Frequency of vowel in string is : %d\n",iRet);

    return 0;
}