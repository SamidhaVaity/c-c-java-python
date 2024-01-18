#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i =0, j=0;
    for(i=1; i<=iRow; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            
            if(i==1||i==iRow||j==i||j==1||j==iCol)
            {
                printf("%d\t",j);
            }  
        }
        printf("\n");
    }
}

int main()
{
    int Value1 = 0, Value2 = 0;

    printf("Enter the number of rows : ");
    scanf("%d",&Value1);
    printf("Enter the number of col : ");
    scanf("%d",&Value2);

    Pattern(Value1, Value2);

    return 0;
}