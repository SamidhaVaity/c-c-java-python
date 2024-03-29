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

void InsertLast(PPNODE Head, int No)
{
    //Temporary pointer for LL traversal
    PNODE Temp = *Head;

    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*Head ==NULL)
    {
    *Head = newn;
    }
    else
    {
        // Travel the LL till last node
        while(Temp->next !=NULL)
        {
            Temp = Temp->next;
        }
        // Add the address of new node at the end of the last node
        Temp->next = newn;
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

void DeleteFirst(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head ==NULL)    //Case 1
    {
        return;
    }
    else if((*Head)->next == NULL)      //Case 2
    {
        free(*Head);
        *Head = NULL;
    }
    else        //Case 3
    {
        *Head = (*Head)->next;
        free(Temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE Temp = *Head;
    if(*Head ==NULL)    //Case 1
    {
        return;
    }
    else if((*Head)->next == NULL)      //Case 2
    {
        free(*Head);
        *Head = NULL;
    }
    else        //Case 3
    {
       while(Temp->next->next!=NULL) 
       {
        Temp=Temp->next;
       }
       free(Temp->next);
       Temp->next = NULL;
    }
}

void InsertATPOs(PPNODE Head, int No, int iPos)
{
    int Size = Count(*Head);
    PNODE newn = NULL;
    int i = 0;
    PNODE temp = *Head;

    //case1 : Invalid Position
    if((iPos<1) || (iPos>Size+1))
    {
        printf("Invalid Position\n");
    }

    //Case 2 : First Position
    if(iPos==1)
    {
        InsertFirst(Head, No);
    }

    //Case 3 : Last Position
    else if(iPos == Size+1)
    {
        InsertLast(Head, No);
    }
    //Case 4: Position is in between First & Last
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;

        for(i=1; i<iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

    }
}

void DeleteATPOs(PPNODE Head, int iPos)
{
    int Size = Count(*Head);
    PNODE temp = *Head;
    PNODE targetednode = NULL;
    int i =0;

    //case1 : Invalid Position
    if((iPos<1) || (iPos>Size))
    {
        printf("Invalid Position\n");
    }

    //Case 2 : First Position
    if(iPos==1)
    {
        DeleteFirst(Head);
    }

    //Case 3 : Last Position
    else if(iPos == Size)
    {
        DeleteLast(Head);
    }
    //Case 4: Position is in between First & Last
    else
    {
        for(i=1; i<iPos-1; i++)
        {
            temp = temp->next;
        }
        targetednode = temp->next;

        temp->next = temp->next->next;
        free(targetednode);
    }
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 111);
    InsertFirst(&First, 101);
    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);
    InsertLast(&First,121);

    InsertATPOs(&First, 105, 5);
    Display(First);

    iRet = Count(First);
    printf("Number of nodes are: %d\n",iRet);

    DeleteATPOs(&First,5);
    Display(First);

    iRet = Count(First);
    printf("Number of nodes are: %d\n",iRet);



    return 0;
}