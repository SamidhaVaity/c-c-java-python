#include<stdio.h>

void Pattern(int iRow)
{
    int i =0, j=0;

    for(i=iRow; i>=1; i--)
    {
        for(j=1; j<=iRow; j++)
        {
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int Value1 = 0;

    printf("Enter the number of rows : ");
    scanf("%d",&Value1);

    Pattern(Value1);

    return 0;
}