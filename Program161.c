#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * next;    
}NODE, *PNODE, **PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    if((*Head==NULL)&&(*Tail==NULL))   //LL is empty 
    {
        *Head = newn;
        *Tail = newn;
    }
    else                                // at least one node or more
    {
        newn->next = *Head;
        *Head = newn;
    }
    (*Tail)->next = *Head;              //#
}

void InsertLast(PPNODE Head, PPNODE Tail, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    if((*Head==NULL)&&(*Tail==NULL))   //LL is empty 
    {
        *Head = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    }
    else                                // at least one node or more
    {
        (*Tail)->next = newn;
        *Tail = newn;
        (*Tail)->next = *Head;
    }
}


void DeleteFirst(PPNODE Head, PPNODE Tail)
{
    if(*Head==NULL && *Tail==NULL)
    {
        return;
    }
    else if(*Head == *Tail)
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
    }
}

void DeleteLast(PPNODE Head, PPNODE Tail)
{
    PNODE temp = *Head;
    if(*Head==NULL && *Tail==NULL)
    {
        return;
    }
    else if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
    }
    else
    {
        while(temp->next != *Tail)
        {
            temp = temp->next;
        }
        free(*Tail);
        *Tail = temp;
        (*Tail)->next = *Head;
        
    }
}

void Display(PNODE Head, PNODE Tail)
{
    printf("Elements of Linked List are :\n");

    if((Head!=NULL)&&(Tail!=NULL))
    {
        do
        {
            printf("|%d|->",Head->data);
            Head = Head->next;
        }while(Head != Tail->next);

        printf("Address of first node\n");
    }

}

int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;

    if((Head!=NULL)&&(Tail!=NULL))
    {
        do
        {
            iCnt++;
            Head = Head->next;
        }while(Head != Tail->next);
    }
    return iCnt;
}


void InsertAtPos(PPNODE Head, PPNODE Tail, int no, int ipos)
{
    int Size = 0, i =0;
    Size = Count(*Head, *Tail);
    PNODE newn = NULL;
    PNODE Temp = *Head;

    if((ipos<1)||(ipos>Size+1))
    {
        printf("Invalid Position\n");
    }
    else if(ipos==1)
    {
        InsertFirst(Head, Tail, no);
    }
    else if(ipos==Size+1)
    {
        InsertLast(Head, Tail, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = no;
        newn->next =NULL;

        for(i=1; i<ipos-1; i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next = newn;
    }
}

void DeleteAtPos(PPNODE Head, PPNODE Tail, int ipos)
{
    int Size = 0, i =0;
    Size = Count(*Head, *Tail);
    PNODE Temp = *Head;
    PNODE TargetedNode = NULL;

    if((ipos<1)||(ipos>Size))
    {
        printf("Invalid Position\n");
    }
    else if(ipos==1)
    {
        DeleteFirst(Head, Tail);
    }
    else if(ipos==Size)
    {
        DeleteLast(Head, Tail);
    }
    else
    {
        for(i=1; i<ipos-1; i++)
        {
            Temp = Temp->next;
        }
        TargetedNode = Temp->next;
        Temp->next = Temp->next->next;
        free(TargetedNode);
    }

}

int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;             //#
    int iRet = 0;

    InsertFirst(&First, &Last, 51);
    InsertFirst(&First, &Last, 21);
    InsertFirst(&First, &Last, 11);
    InsertFirst(&First, &Last, 01);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of elements in linked lise are : %d\n",iRet);

    InsertLast(&First, &Last, 101);
    InsertLast(&First, &Last, 111);
    InsertLast(&First, &Last, 121);

    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of elements in linked lise are : %d\n",iRet);

    InsertAtPos(&First, &Last, 105, 5);
    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of elements in linked lise are : %d\n",iRet);

    DeleteAtPos(&First, &Last, 5);
    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of elements in linked lise are : %d\n",iRet);

    DeleteFirst(&First, &Last);
    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of elements in linked lise are : %d\n",iRet);

    DeleteLast(&First, &Last);
    Display(First, Last);
    iRet = Count(First, Last);
    printf("Number of elements in linked lise are : %d\n",iRet);


    return 0;
}