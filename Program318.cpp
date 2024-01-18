#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node *next;
    struct node *prev;
};

template <class T>
class DoublyLL
{
    private:
        struct node<T> * first;
        int Count;

    public:
        DoublyLL();
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
DoublyLL<T>::DoublyLL()
{
    first = NULL;
    Count = 0;
}

template <class T>
void DoublyLL<T>::InsertFirst(T no)
{
    struct node<T> * newn = NULL;
    newn = new struct node<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first ==NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }
    Count++;
}

template <class T>
void DoublyLL<T>::InsertLast(T no)
{
    struct node<T> * newn = NULL;
    newn = new struct node<T>;
    newn->data = no;
    newn->next = NULL;
    newn->prev = NULL;

    if(first ==NULL)
    {
        first = newn;
    }
    else
    {
        struct node<T> * temp = first;

        while(temp->next !=NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
        newn->prev = temp;
    }
    Count++;
}

template <class T>
void DoublyLL<T>::Display()
{
    cout<<"Elements of linked list are "<<endl;

    cout<<"NULL<=>";
    while(first!=NULL)
    {
        cout<<"| "<<first->data<<" |<=>";
        first = first->next;
    }
    cout<<"NULL "<<endl;
}

template <class T>
int DoublyLL<T>::CountNode()
{
    return Count;
}

template <class T>
void DoublyLL<T>::DeleteFirst()
{
    if(first==NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first->next;
        first == NULL;
    }
    else
    {
        first = first->next;
        delete first->prev;
        first->prev = NULL;
    }
    Count --;
}

template <class T>
void DoublyLL<T>::DeleteLast()
{
    if(first==NULL)
    {
        return;
    }
    else if (first->next == NULL)
    {
        delete first->next;
        first == NULL;
    }
    else
    {
        struct node<T>* temp = NULL;
       while(temp->next->next!=NULL)
       {
            temp = temp->next;
       }
       delete temp->next;
       temp->next = NULL; 
    }
    Count --;
}

template <class T>
void DoublyLL<T>::InsertAtPos(T no,int ipos)
{
    if(ipos<1 || ipos<Count+1)
    {
        return;
    }
    if(ipos==1)
    {
        InsertFirst(no);
    }
    else if(ipos = Count+1)
    {
        InsertLast(no);
    }
    else
    {
        struct node<T>* temp = first;
        int i = 0;
        struct node<T>* newn = NULL;
        newn = new struct node<T>;
        newn->data = no;
        newn->next =NULL;
        newn->prev =NULL;

        for(i=1; i<ipos-1; i++)
        {
            temp= temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        newn->prev = temp;
        temp->next = newn;
        Count ++;
    }
}

template <class T>
void DoublyLL<T>::DeleteAtPos(int ipos)
{
    if(ipos<1 || ipos<Count)
    {
        return;
    }
    if(ipos==1)
    {
        DeleteFirst();
    }
    else if(ipos = Count)
    {
        DeleteLast();
    }
    else
    {
        struct node<T>* temp = first;
        int i = 0;
        
        for(i=1; i=ipos-1; i++)
        {
            temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;
        Count--;
    }
}

int main()
{
    DoublyLL <int>iobj;
    DoublyLL <float>fobj;
    DoublyLL <double>dobj;
    DoublyLL <char>cobj;

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