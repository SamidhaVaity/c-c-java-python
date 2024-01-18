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
typedef struct node ** PPNODE;

//InsertLast
void Enqueue(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    PNODE Temp = *Head;

    newn->data = no;
    newn->next = NULL;

    if(*Head==NULL)
    {
        *Head = newn;
    }
    else
    {
        while(Temp->next!=NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
    }
}

int Dequeue(PPNODE Head)
{
    int value = 0;
    PNODE temp = *Head;

    if(*Head ==NULL)
    {
        printf("Queue is empty");
    }
    else
    {
        value = (*Head)->data;
        *Head - (*Head)->next;
        free(temp);
    }
        return value;

}

void Display(PNODE Head)
{
    printf("Elements of queue are : \n");

    while(Head!=NULL)
    {
        printf("|%d|\t",Head->data);
        Head = Head->next;
    }
    printf("\n");
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    Enqueue(&First, 11);
    Enqueue(&First, 21);
    Enqueue(&First, 51);
    Enqueue(&First, 101);
    Enqueue(&First, 111);
    Enqueue(&First, 121);

    Display(First);

    iRet = Dequeue(&First);
    printf("Removed element from queue is : %d\n",iRet);

    iRet = Dequeue(&First);
    printf("Removed element from queue is : %d\n",iRet);
    
    return 0;
}
