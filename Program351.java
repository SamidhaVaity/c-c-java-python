
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

class Stack
{
    private node first;
    private int Count;

    public Stack()
    {
        first = null;
        Count = 0;
    }

    public void Enqueue(int no)
    {
        node newn = new node(no);

        if(first==null)
        {
            first = newn;
        }
        else
        {
            node temp = first;
            while(temp.next!=null)
            {
                temp = temp.next;
            }
            temp.next = newn;
        }
        Count++;
    }

    public int Dequeue()
    {
        int value = 0;

        if(first == null)
        {
            System.out.println("Queue is empty");
        }
        else if(first.next==null)
        {
            first = null;
        }
        else
        {
            value = first.Data;
            first = first.next;
            first.prev = null;       //#
        }
        return value;
    }
    

    public void Display()
    {
        node temp = first;

        System.out.println("Elements of Queue are :");
        System.out.print("null<=>");
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
    
    
}
class Program351
{
    public static void main(String arg[])
    {
        int iRet = 0;
        Stack obj = new Stack();

        obj.Enqueue(51);
        obj.Enqueue(21);
        obj.Enqueue(11);

        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are "+iRet);

        obj.Enqueue(111);
        obj.Enqueue(121);
        obj.Enqueue(151);

        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of Elements "+iRet);

        obj.Display();
        iRet = obj.Dequeue();
        System.out.println("Removed Element from queue is "+iRet);

        obj.Display();
        iRet = obj.Dequeue();
        System.out.println("Removed Element from queue is "+iRet);


        obj.Display();
        iRet = obj.Dequeue();
        System.out.println("Removed Element from queue is "+iRet);

        obj.Display();
        iRet = obj.Dequeue();
        System.out.println("Removed Element from queue is "+iRet);

    }
}