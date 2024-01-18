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

int Addition(int no)
{
    int iSum = 0;
    int iDigit = 0;
    while(no!=0)
    {
        iDigit = no%10;
        iSum = iSum+iDigit;
        no = no/10;
    }
    return iSum;
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

int SumDigit(PNODE Head)
{
    int Add = 0;

    while(Head!=NULL)
    {
        Add = Addition(Head->data);
        printf("%d\t",Add);
        Head = Head->next;
    }
    
}


int main()
{
    int iRet = 0;
    PNODE First = NULL;

    InsertFirst(&First, 111);
    InsertFirst(&First, 230);
    InsertFirst(&First, 20);
    InsertFirst(&First, 240);
    InsertFirst(&First, 640);
    
    Display(First);
    SumDigit(First);

    return 0;
}