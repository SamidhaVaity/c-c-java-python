#include<stdio.h>
#include<stdlib.h>

//Structure Declaration
struct Node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    //Step1 : Allocate memory for node
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    //step2 : Initialise the node
    newn->data = No;
    newn->next = NULL;

    //Step 3 : Check whether LL is empty or not
    if(*Head == NULL)       //LL is empty
    {
        *Head = newn;
    }
    else                    // LL Contains atleast 2 node in it
    {
        newn->next =*Head;
        *Head = newn;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 51);
    InsertFirst(&First, 21);
    InsertFirst(&First, 11);

    return 0;
}