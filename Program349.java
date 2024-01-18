
class node
{
    public int Data;
    public node next;
    public node prev;

    public node(int no)
    {
        Data = no;
        next = null;   
        prev = null;    //#
    }
}

class DoublyCL
{
    private node first;
    private node last;
    private int Count;

    public DoublyCL()
    {
        first = null;
        last = null;
        Count = 0;
    }

    public void InsertFirst(int no)
    {
        node newn = new node(no);

        if(first ==null && last==null)
        {
            first = newn;
            last = newn;
        }
        else
        {
            newn.next = first;
            first.prev = newn;
            first = newn;
        }
        first.prev = last;
        last.next = first;
        Count++;
    }
    public void InsertLast(int no)
    {
        node newn = new node(no);

        if(first ==null && last==null)
        {
            first = newn;
            last = newn;
        }
        else
        {
            newn.prev = last;
            last.next = newn;
            last = newn;
        }
        first.prev = last;
        last.next = first;
        Count++;
    }
    public void DeleteFirst()
    {
        if(first==null && last==null)
        {
            return;
        }
        else if(first.next ==null && last.next ==null)
        {
            first = null;
            last = null;
        }
        else
        {
            first = first.next;
            last.next = first;
            first.prev = last;
        }
        Count--;
    }
    public void DeleteLast()
    {
        if(first==null && last==null)
        {
            return;
        }
        else if(first.next ==null && last.next ==null)
        {
            first = null;
            last = null;
        }
        else
        {
            node temp = first;
            while(temp.next!=first)
            {
                temp = temp.next;
            }
            last = temp;
            last.next = first;
            first.prev = last;
        }
        Count--;
    }
    public void Display()
    {
        System.out.println("Elements of Linked list are");
        if(first!=null && last!=null)
        {
            do 
            {
                System.out.print("| "+first.Data+"|<=>");
                first = first.next;
            }while(first!=last.next);
            System.out.println("Address of First Node");
        }
    }
        public int Count()
    {
        return Count;
    }
    public void InsertAtPos(int no, int pos)
    {
        node newn = new node(no);

        if((pos<1) || (pos>Count+1))
        {
            System.out.println("Invalid Position");
            return;
        }
        if(pos==1)
        {
            InsertFirst(no);
        }
        else if(pos==Count+1)
        {
            InsertLast(no);
        }
        else
        {
            node temp = first;
            int i = 0;
            for(i=1; i<pos-1; i++)
            {
                temp = temp.next;
            }
            temp.next.prev = newn;
            newn.next = temp.next;
            newn.prev = temp;
            temp.next = newn;
            Count++;
        }   
    }
    public void DeleteAtPos(int pos)
    {

        if((pos<1) || (pos>Count))
        {
            System.out.println("Invalid Position");
            return;
        }
        if(pos==1)
        {
            DeleteFirst();
        }
        else if(pos==Count)
        {
            DeleteLast();
        }
        else
        {
            node temp = first;
            int i = 0;

            for(i=1; i<pos-1; i++)
            {
                temp = temp.next;
            }
            
            temp.next = temp.next.next;
            temp.next.prev = temp;
            Count--;
        }   
    }
}


class Program349
{
    public static void main(String arg[])
    {
        int iRet = 0;
        DoublyCL obj = new DoublyCL();

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