#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i =0, j=0;

    for(i=1; i<=iRow; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            if((j==1) || (i==iRow) || (i>j))
            {
                printf("#\t");
            }
            else if (i==j)
            {
                printf("$\t");
            }
            else{
                printf("*\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int Value1 = 0;
    int Value2 = 0;

    printf("Enter the number of rows : ");
    scanf("%d",&Value1);

    printf("Enter the number of coumns : ");
    scanf("%d",&Value2);

    Pattern(Value1, Value2);

    return 0;
}