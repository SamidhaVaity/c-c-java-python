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

void EvenDisplay(PNODE Head)
{
    printf("Even ellements are : \n");

    while(Head !=NULL)
    {
        if(((Head->data)%2)==0)
        {
            printf("%d\n",Head->data);
        }
        Head = Head->next;
    }
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
    EvenDisplay(First);
    return 0;
}