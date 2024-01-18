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

int reverse(int no)
{
    int rev = 0;
    while (no!=0);
    {
        rev = rev*10;
        rev = rev+no%10;
        no=no/10;
    }
    return rev;
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

void Reverse(PNODE Head)
{
    int No = Head->data;
    int Reverse = 0;

    while(Head!=NULL)
    {
        Reverse = reverse(Head->data);
        printf("%d",Reverse);
        Head = Head->next;
    }
}


int main()
{
    int iRet = 0;
    PNODE First = NULL;

    InsertFirst(&First, 120);
    InsertFirst(&First, 240);
    InsertFirst(&First, 6);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);
    
    Display(First);
    Reverse(First);

    return 0;
}