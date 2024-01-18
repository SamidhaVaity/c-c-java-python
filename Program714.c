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

int Perfect(int no)
{
    int iCnt = 0;
    int Sum = 0;
    for(iCnt = 1; iCnt<=no; iCnt++)
    {
        if((no%iCnt)==0)
        {
            {
                Sum = Sum+iCnt;
            }
        }
    }

    if(no==Sum)
    {
        return no;
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

void DisplayPerfect(PNODE Head)
{
    int No = Head->data;
    int Ans = 0;

    while(Head!=NULL)
    {
        Ans = Perfect(Head->data);
        printf("%d\t",Ans);
        Head = Head->next;
    }
}


int main()
{
    int iRet = 0;
    PNODE First = NULL;

    InsertFirst(&First, 11);
    InsertFirst(&First, 28);
    InsertFirst(&First, 17);
    InsertFirst(&First, 41);
    InsertFirst(&First, 6);
    InsertFirst(&First, 89);
    
    Display(First);
    DisplayPerfect(First);
    

    return 0;
}