#include<stdio.h>

void Pattern(int iRow)
{
    int i =0, j=0, k=0;

    for(i=1; i<=iRow; i++)
    {
        for(j=1; j<=i; j++)
        {
            {
                printf(" \t");
            }
        }
        for(k=i; k<=iRow; k++)
        {
            {
                printf("%d\t",k);
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