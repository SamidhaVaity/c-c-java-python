#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
} 

void Display(PNODE Head)
{
    printf("Elements of Linked List are : \n");

    while(Head!=NULL)
    {
        printf("|%d|->",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCnt = 0;

    while(Head!=NULL)
    {
        iCnt++;
        Head = Head->next;
    }
    return iCnt;
}

int SecondLargest(PNODE Head)
{
    int Max = Head->data;
    int i = 0, j=0;
    int size = Count(Head);

    while(Head!=NULL)
    {
        for(i = 0; i<size; i++)
        {
            if(i==j)
            {
                continue;
            }
            else
            {
                if(Max< Head->data)
                {
                    Max = Head->data;
                }
            }
        }
        Head = Head->next;
    }
    return Max;
}


int main()
{
    int iRet = 0;
    PNODE First = NULL;

    InsertFirst(&First, 11);
    InsertFirst(&First, 20);
    InsertFirst(&First, 17);
    InsertFirst(&First, 41);
    InsertFirst(&First, 22);
    InsertFirst(&First, 89);
    
    Display(First);
    iRet = SecondLargest(First);
    printf("%d\t",iRet);

    return 0;
}