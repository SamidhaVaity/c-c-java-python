#include<stdio.h>

void Pattern(int iRow)
{
    int i =0, j=0;
    for(i=1; i<=iRow; i++)
    {
        for(j=1; j<=iRow; j++)
        {
            
            if(i+j==iRow+1)
            {
                printf("#\t");
            }
            else
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