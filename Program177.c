#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head ==NULL)
    {
        
    *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
}

int Display(PNODE Head)
{
    printf("Contents of Linked List : \n");

    while(Head!=NULL)
    {
        printf("|%d|->",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");

}

int Sum(PNODE Head)
{
    int iSum = 0;

    while(Head !=NULL)
    {
        iSum = iSum+(Head->data);
        Head = Head->next;
    }
    return iSum;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 111);
    InsertFirst(&First, 100);
    InsertFirst(&First, 50);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    Display(First);

    iRet = Sum(First);
    iRet = Sum(First);
    printf("Addition is : %d\n",iRet);

    return 0;
}