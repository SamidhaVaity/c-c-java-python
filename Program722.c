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

int Minimum(int no)
{
    
    int iDigit = 0, iMin = iDigit;
    while(no!=0)
    {
        iDigit = no%10;
        if(iDigit<iMin)
        {
            iMin = iDigit;
        }
        no = no/10;
    }
    return iMin;
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

void DisplaySmall(PNODE Head)
{
    int No = Head->data;
    int Ans = 0;

    while(Head!=NULL)
    {
        Ans = Minimum(Head->data);
        printf("%d\t",Ans);
        Head = Head->next;
    }
}


int main()
{
    int iRet = 0;
    PNODE First = NULL;

    InsertFirst(&First, 11);
    InsertFirst(&First, 20);
    InsertFirst(&First, 32);
    InsertFirst(&First, 41);
    
    Display(First);
    DisplaySmall(First);

    return 0;
}