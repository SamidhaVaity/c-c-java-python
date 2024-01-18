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

int FirstOccurance(PNODE Head, int no)
{
    int iPos = 1;

    while(Head !=NULL)
    {
        if((Head->data)==no)
        {
            break;
        }
        Head = Head->next;
        iPos++;
    }
    if(Head ==NULL)
    {
        return -1;
    }
    else
    {
        return iPos;
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 11);
    InsertFirst(&First, 100);
    InsertFirst(&First, 50);
    InsertFirst(&First, 11);
    InsertFirst(&First, 11);
    InsertFirst(&First, 5);
    InsertFirst(&First, 3);

    Display(First);

    iRet = FirstOccurance(First, 11);
    printf("First occurancey is at : %d\n",iRet);

    return 0;
}