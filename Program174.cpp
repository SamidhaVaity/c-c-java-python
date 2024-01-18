#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
}NODE, *PNODE;

class DoublyCL
{
    private:
        PNODE first;
        PNODE last;
        int Count;

    public:
        DoublyCL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(int no,int ipos);
        void DeleteAtPos(int ipos);
};

DoublyCL::DoublyCL()
{
    first = NULL;
    last = NULL;
    Count = 0;
}
void DoublyCL::InsertFirst(int no)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = no;
    newn->prev = NULL;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }
    first->prev = last;
    last->next = first;
    Count++;
}
void DoublyCL::InsertLast(int no)
{
    PNODE newn = NULL;
    newn = new NODE;

    newn->data = no;
    newn->next = NULL;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->prev = last;
        last->next = newn;
        last = newn;
    }
    first->prev = last;
    last->next = first;
    Count++;
}
void DoublyCL::Display()
{
    cout<<"Elements of Linked List are "<<endl;

    if(first!=NULL && last!=NULL)
    {
        do 
        {
            cout<<"| "<<first->data<<" |<=>";
            first = first->next;
        }while(first!=last->next);
    }
    cout<<"Address of first element"<<endl;
}
int DoublyCL::CountNode()
{
    return Count;
}
void DoublyCL::DeleteFirst()
{
    if(first==NULL && last==NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        first = first->next;
        delete last->next;
        last->next = first;
        first->prev = last;
    }
    Count--;
}
void DoublyCL::DeleteLast()
{
    if(first==NULL && last==NULL)
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        last = last->prev;
        delete  last->next;
        first->prev = last;
        last->next = first;
    }
    Count--;
    
}
void DoublyCL::InsertAtPos(int no,int ipos)
{
    PNODE newn = NULL;
    newn = new NODE;

    if(ipos<1 || ipos>Count+1)
    {
        return;
    }
    if(ipos==1)
    {
        InsertFirst(no);
    }
    else if(ipos==Count+1)
    {
        InsertLast(no);
    }
    else
    {
        int i = 0;
        newn->data = no;
        newn->next = NULL;
        newn->prev = NULL;
        PNODE temp = first;
        for(i=1; i<ipos-1; i++)
        {
            temp = temp->next;
        }
        temp->next->prev = newn;
        newn->next = temp->next;
        temp->next = newn;
        newn->prev = temp;
        Count++;
    }
}
void DoublyCL::DeleteAtPos(int ipos)
{
    if(ipos<1 || ipos>Count)
    {
        return;
    }
    if(ipos==1)
    {
        DeleteFirst();
    }
    else if(ipos==Count)
    {
        DeleteLast();
    }
    else
    {
        int i = 0;
        PNODE temp = first;
        for(i=1; i<ipos-1; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        delete temp->next->prev;
        temp->next->prev = temp;
        Count--;
    }
}

int main()
{
    DoublyCL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.CountNode();
    cout<<"The number of elements in linked list are "<<iRet<<endl;

    obj.InsertLast(101);
    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"The number of elements in linked list are "<<iRet<<endl;

    obj.InsertAtPos(111,5);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"The number of elements in linked list are "<<iRet<<endl;

    obj.DeleteAtPos(5);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"The number of elements in linked list are "<<iRet<<endl;

    obj.DeleteFirst();
    obj.Display();
    iRet = obj.CountNode();
    cout<<"The number of elements in linked list are "<<iRet<<endl;

    obj.DeleteLast();
    obj.Display();
    iRet = obj.CountNode();
    cout<<"The number of elements in linked list are "<<iRet<<endl;

    return 0;
}