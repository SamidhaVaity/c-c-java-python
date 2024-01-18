#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE;

class SinglyCL
{
    private:
        PNODE first;
        PNODE last;
        int Count;

    public:
        SinglyCL();
        void InsertFirst(int no);
        void InsertLast(int no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(int no,int ipos);
        void DeleteAtPos(int ipos);
};


SinglyCL::SinglyCL()
{
    first = NULL;
    last = NULL;
    Count = 0;
}

void SinglyCL::InsertFirst(int no)
{
    PNODE newn = NULL;
    newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
        last->next = first; 
    }
    else
    {
        newn->next = first;
        first = newn;
        last->next = first;
    }
    Count++;
}

void SinglyCL::InsertLast(int no)
{
    PNODE newn = NULL;
    PNODE temp = first;
    newn = new NODE;
    newn->data = no;
    newn->next = NULL;

    if(first == NULL && last == NULL)
    {
        first = newn;
        last = newn;
        last->next = first; 
    }
    else
    {
        last->next = newn;
        last = newn;
        last->next = first;
    }
    Count++;
}

void SinglyCL::Display()
{
    cout<<"Elements of the circular linked list are: " <<endl;

    if(first != NULL && last!= NULL)
    {
        do 
        {
            cout<<"| "<<first->data<<"|->";
            first = first->next;
        }while(first!=last->next);
        cout<<"Address of first node"<<endl;
    }
}
int SinglyCL::CountNode()
{
    return Count;
}
void SinglyCL::DeleteFirst()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if((first->next == NULL)&& (last->next==NULL))
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        PNODE temp = first;
        first = first->next;
        delete temp;
        last->next = first;
    }
    Count--;
}

void SinglyCL::DeleteLast()
{
    if(first == NULL && last == NULL)
    {
        return;
    }
    else if((first->next == NULL)&& (last->next==NULL))
    {
        delete (first);
        first = NULL;
        last = NULL;
    }
    else
    {
        PNODE temp = first;
        while(temp->next!=first)
        {
            temp = temp->next;
        }
        delete last;
        last = temp;
        last->next = first;
    }
    Count--;
}

void SinglyCL::InsertAtPos(int no,int ipos)
{
    PNODE newn = NULL;
    newn = new NODE;
    int i = 0;

    if(ipos<1 || ipos>Count+1)
    {
        cout<<"Invalid Position";
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
        PNODE temp = first;
        newn->data = no;
        newn->next = NULL;

        for(i=1; i<ipos-1; i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next = newn;
        Count++;
    }
}
void SinglyCL::DeleteAtPos(int ipos)
{
    int i = 0;

    if(ipos<1 || ipos>Count)
    {
        cout<<"Invalid Position";
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
        PNODE temp = first;

        for(i=1; i<ipos-1; i++)
        {
            temp = temp->next;
        }
        PNODE TargetedNode = temp->next;
        temp->next = TargetedNode->next;
        delete TargetedNode;
        Count--;
    }
}

int main()
{
    SinglyCL obj; 
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();
    iRet = obj.CountNode();
    cout<<"Elements in linked list are "<< iRet <<endl;

    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.InsertLast(151);

    obj.Display();
    iRet = obj.CountNode();
    cout<<"Elements in linked list are "<< iRet <<endl;

    obj.InsertAtPos(105, 4);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Elements in linked list are "<< iRet <<endl;

    obj.DeleteAtPos(4);
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Elements in linked list are "<< iRet <<endl;

    obj.DeleteFirst();
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Elements in linked list are "<< iRet <<endl;

    obj.DeleteLast();
    obj.Display();
    iRet = obj.CountNode();
    cout<<"Elements in linked list are "<< iRet <<endl;

    return 0;
}