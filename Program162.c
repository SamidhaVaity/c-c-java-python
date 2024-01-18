#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node * next;    
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head==NULL)&&(*Tail==NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;
        *Head = newn;

    }
    (*Head)->prev = *Tail;
    (*Tail)->next = *Head;
}

void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if((*Head==NULL)&&(*Tail==NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->prev = *Tail;
        (*Tail)->next=newn;
        *Tail = newn;
    }
    (*Head)->prev = *Tail;
    (*Tail)->next = *Head;
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if(*Head==NULL && *Tail ==NULL)
    {
        return;
    }
    else if((*Head)==*Tail )
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free((*Tail)->next);
        (*Tail)->next = *Head;
        (*Head)->prev = *Tail;
    }
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    if(*Head==NULL && *Tail ==NULL)
    {
        return;
    }
    else if((*Head)==*Tail )
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        *Tail = (*Tail)->prev;
        free((*Tail)->next);
        (*Tail)->next = *Head;
        (*Head)->prev = *Tail;
    }
}

void Display(PNODE Head, PNODE Tail)
{
    printf("Elements of Linked List are : \n");

    if(Head!=NULL && Tail!=NULL)
    {
        do
        {
            printf("|%d|<=>",Head->data);
            Head = Head->next;
        }while(Head!=Tail->next);
    }
    printf("Address of First node. \n");
}

int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;

    if(Head!=NULL && Tail!=NULL)
    {
        do
        {
            iCnt++;
            Head = Head->next;
        }while(Head!=Tail->next);
    }
    return iCnt;
}

void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int ipos)
{
    PNODE newn = NULL;
    int size = 0, i = 0;
    size = Count(*Head, *Tail);
    PNODE Temp = *Head;

    if((ipos<1)||(ipos>size+1))
    {
        "Invalid Position";
    }
    else if(ipos ==1)
    {
        InsertFirst(Head, Tail, no);
    }
    else if(ipos ==size+1)
    {
        InsertLast(Head, Tail, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;

        for(i=1; i<ipos-1; i++)
        {
            Temp = Temp->next;
        }
        Temp->next->prev = newn;
        newn->next = Temp->next;
        Temp->next = newn;
        newn->prev = Temp;
    }

}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int ipos)
{
    int size = 0, i = 0;
    size = Count(*Head, *Tail);
    PNODE Temp = *Head;

    if((ipos<1)||(ipos>size))
    {
        "Invalid Position";
    }
    else if(ipos ==1)
    {
        DeleteFirst(Head, Tail);
    }
    else if(ipos ==size)
    {
        DeleteLast(Head, Tail);
    }
    else
    {

        for(i=1; i<ipos-1; i++)
        {
            Temp = Temp->next;
        }
        Temp->next = Temp->next->next;
        free(Temp->next->prev);
        Temp->next->prev = Temp;
    }
}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    int iRet = 0;

    InsertFirst(&First, &Last, 51);
    InsertFirst(&First, &Last, 21);
    InsertFirst(&First, &Last, 151);

    InsertLast(&First, &Last, 101);
    InsertLast(&First, &Last, 121);
    InsertLast(&First, &Last, 151);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Elements in Linked List are : %d\n",iRet);

    InsertAtPos(&First, &Last, 105, 5);
    Display(First, Last);
    iRet = Count(First, Last);
    printf("Elements in Linked List are : %d\n",iRet);

    DeleteAtPos(&First, &Last, 5);
    Display(First, Last);
    iRet = Count(First, Last);
    printf("Elements in Linked List are : %d\n",iRet);

    DeleteFirst(&First, &Last);
    Display(First, Last);
    iRet = Count(First, Last);
    printf("Elements in Linked List are : %d\n",iRet);

    DeleteLast(&First, &Last);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Elements in Linked List are : %d\n",iRet);
    return 0;
}

