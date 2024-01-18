#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
};

template <class T>
class SinglyCL
{
    private:
        struct node<T>* first;
        struct node<T>* last;
        int Count;

    public:
        SinglyCL();
        void InsertFirst(T no);
        void InsertLast(T no);
        void Display();
        int CountNode();
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(T no,int ipos);
        void DeleteAtPos(int ipos);
};

template <class T>
SinglyCL<T>::SinglyCL()
{
    first = NULL;
    last = NULL;
    Count = 0;
}

template <class T>
void SinglyCL<T>::InsertFirst(T no)
{
    struct node <T>* newn = NULL;
    newn = new struct node <T>;
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

template <class T>
void SinglyCL<T>::InsertLast(T no)
{
    struct node <T>* newn = NULL;
    struct node <T>* temp = first;
    newn = new struct node <T>;
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

template <class T>
void SinglyCL<T>::Display()
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

template <class T>
int SinglyCL<T>::CountNode()
{
    return Count;
}

template <class T>
void SinglyCL<T>::DeleteFirst()
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
        struct node <T>* temp = first;
        first = first->next;
        delete temp;
        last->next = first;
    }
    Count--;
}

template <class T>
void SinglyCL<T>::DeleteLast()
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
        struct node <T>* temp = first;
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

template <class T>
void SinglyCL<T>::InsertAtPos(T no,int ipos)
{
    struct node <T>* newn = NULL;
    newn = new struct node <T>;
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
        struct node <T>* temp = first;
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

template <class T>
void SinglyCL<T>::DeleteAtPos(int ipos)
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
        struct node <T>* temp = first;

        for(i=1; i<ipos-1; i++)
        {
            temp = temp->next;
        }
        struct node <T>* TargetedNode = temp->next;
        temp->next = TargetedNode->next;
        delete TargetedNode;
        Count--;
    }
}

int main()
{
    SinglyCL <int>iobj;
    SinglyCL <float>fobj;
    SinglyCL <double>dobj;
    SinglyCL <char>cobj;

    int iRet = 0;

    
    iobj.InsertLast(11);
    iobj.InsertLast(21);
    iobj.InsertLast(51);
    iobj.InsertLast(101);
    
    cout<<"LinkedList of Integer :"<<"\n";
    iobj.Display();

    fobj.InsertLast(11.99);
    fobj.InsertLast(21.99);
    fobj.InsertLast(51.99);
    fobj.InsertLast(101.99);
    
    cout<<"LinkedList of Floats :"<<"\n";
    fobj.Display();

    dobj.InsertLast(11.99);
    dobj.InsertLast(21.99);
    dobj.InsertLast(51.99);
    dobj.InsertLast(101.99);
    
    cout<<"LinkedList of double :"<<"\n";
    dobj.Display();

    cobj.InsertLast('A');
    cobj.InsertLast('B');
    cobj.InsertLast('C');
    cobj.InsertLast('D');
    
    cout<<"LinkedList of character :"<<"\n";
    cobj.Display();
    return 0;
}