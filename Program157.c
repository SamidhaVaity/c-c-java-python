#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
    struct node * prev;           //#
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*Head==NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;           //#
        (*Head) = newn;
    }
}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    PNODE temp = *Head;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(*Head==NULL)
    {
        *Head = newn;
    }
    else
    {
        //type 2
        while(temp->next !=NULL)
        {
            temp = temp->next;           
        }
        temp->next = newn;
        newn->prev = temp;   //#
    }

}



void DeleteFirst(PPNODE Head)
{
    if((*Head) ==NULL)
    {
        return;
    }
    else if(((*Head) -> next ==NULL)&&((*Head)->prev==NULL))
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free((*Head)->prev);
        (*Head)->prev = NULL;
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;
    if((*Head) ==NULL)
    {
        return;
    }
    else if(((*Head) -> next ==NULL) && ((*Head)->prev==NULL))
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while(temp->next->next!=NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}



void Display(PNODE Head)
{
    printf("Contains of LinkedList are : \n");
    printf("NULL<=>");
    while(Head!=NULL)
    {
        printf("|%d|<=>",Head->data);
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

void InsertAtPos(PPNODE Head, int No, int iPos)
{
    int Size = 0;
    Size = Count(*Head);
    PNODE newn = NULL;
    PNODE temp = *Head;
    int i = 0;  


    if((iPos<1)||(iPos>(Size+1)))
    {
        printf("Invalid position\n");
    }
    else if(iPos==1)
    {
        InsertFirst(Head, No);
    }
    else if(iPos==Size+1)
    {
        InsertLast(Head, No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for(i=1; i<iPos-1; i++)
        {
            temp= temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
        
    }
}

void DeleteAtPos(PPNODE Head, int iPos)
{
    int Size = 0;
    Size = Count(*Head);
    PNODE temp = *Head;
    int i = 0;

    if((iPos<1)||(iPos>(Size)))
    {
        printf("Invalid position\n");
    }
    else if(iPos==1)
    {
        DeleteFirst(Head);
    }
    else if(iPos==Size)
    {
        DeleteLast(Head);
    }
    else
    {
        for(i=1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
    }
}

int main()
{
    int iRet = 0;
    PNODE First = NULL;

    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    Display(First);
    iRet = Count(First); 
    printf("Total Elements are : %d\n",iRet);

    InsertLast(&First,101);
    InsertLast(&First,111);
    InsertLast(&First,121);

    Display(First);
    iRet = Count(First); 
    printf("Total Elements are : %d\n",iRet);

    InsertAtPos(&First, 105, 5);
    Display(First);
    iRet = Count(First); 
    printf("Total Elements are : %d\n",iRet);

    DeleteAtPos(&First,5);
    Display(First);
    iRet = Count(First); 
    printf("Total Elements are : %d\n",iRet);

    DeleteFirst(&First);
    Display(First);
    iRet = Count(First); 
    printf("Total Elements are : %d\n",iRet);

    DeleteLast(&First);
    Display(First);
    iRet = Count(First); 
    printf("Total Elements are : %d\n",iRet);
    return 0;
}