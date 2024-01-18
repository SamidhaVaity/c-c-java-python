
class node
{
    public int Data;
    public node next;
    public node prev;       //#

    public node(int no)
    {
        Data = no;
        next = null;
        prev = null;        //#
    }
}

class DoublyLL
{
    private node first;
    private int Count;

    public DoublyLL()
    {
        first = null;
        Count = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = new node(no);

        if(first==null)
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first.prev = newn;      //#
            first = newn;
        }
        Count++;
    }
    public void InsertLast(int no)
    {
        node newn = new node(no);
        node temp = first;

        if(first==null)
        {
            first = newn;
        }
        else
        {
            while(temp.next!=null)
            {
                temp = temp.next;
            }
            temp.next = newn;
            newn.prev = temp;       //#
        }
        Count++;
    }

    public void DeleteFirst()
    {
        if(first == null)
        {
            return;
        }
        else if(first.next==null)
        {
            first = null;
        }
        else
        {
            first = first.next;
            first.prev = null;       //#
        }
        Count--;
    }
    public void DeleteLast()
    {
        if(first == null)
        {
            return;
        }
        else if(first.next==null)
        {
            first = null;
        }
        else
        {
            node temp = first;

            while(temp.next.next!=null)
            {
                temp = temp.next;
            }
            temp.next = null;
        }
        Count--;
    }

    public void Display()
    {
        node temp = first;

        System.out.println("Elements of Linked List are :");
        System.out.println("null<=>");
        while(temp!=null)
        {
            System.out.print("| "+temp.Data+" |<=>");
            temp = temp.next;
        }
        System.out.println("null");
    }

    public int Count()
    {
        return Count;
    }
    
    public void InsertAtPos(int no, int ipos)
    {
        node newn = new node(no);
        int Size = Count;

        if((ipos<1) || (ipos>Size+1))
        {
            System.out.println("Invalid Position");
            return;
        }
        if(ipos==1)
        {
            InsertFirst(no);
        }
        else if(ipos==Size+1)
        {
            InsertLast(no);
        }
        else
        {
            node temp = first;
            int i = 0;

            for(i=1; i<ipos-1; i++)
            {
                temp =temp.next;
            }
            newn.next = temp.next;
            temp.next.prev = newn;      //#
            temp.next = newn;     
            newn.prev = temp;           //#
        }
        Count++;
    }

    public void DeleteAtPos(int ipos)
    {
        int Size = Count;

        if((ipos<1) || (ipos>Size))
        {
            System.out.println("Invalid Position");
            return;
        }
        else if(ipos==1)
        {
            DeleteFirst();
        }
        else if(ipos==Size)
        {
            DeleteLast();
        }
        else
        {
            int i = 0;
            node temp = first;

            for(i=1; i<ipos-1; i++)
            {
                temp =temp.next;
            }

            temp.next = temp.next.next;
            temp.next.prev = temp;
        }
        Count--;
    }
}
class Program346
{
    public static void main(String arg[])
    {
        int iRet = 0;
        DoublyLL obj = new DoublyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are "+iRet);

        obj.InsertLast(111);
        obj.InsertLast(121);
        obj.InsertLast(151);

        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are "+iRet);

        obj.InsertAtPos(101,4);
        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are "+iRet);

        obj.DeleteAtPos(4);
        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are "+iRet);

        obj.DeleteFirst();
        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are "+iRet);

        obj.DeleteLast();
        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are "+iRet);
    }
}