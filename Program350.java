
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

    public void Push(int no)
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

    public int Pop()
    {
        int value = 0;

        if(first == null)
        {
            System.out.println("Stack is empty");
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

        System.out.println("Elements of Stack are :");
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
class Program350
{
    public static void main(String arg[])
    {
        int iRet = 0;
        Stack obj = new Stack();

        obj.Push(51);
        obj.Push(21);
        obj.Push(11);

        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of elements are "+iRet);

        obj.Push(111);
        obj.Push(121);
        obj.Push(151);

        obj.Display();

        iRet = obj.Count();
        System.out.println("Number of Elements "+iRet);

        obj.Display();
        iRet = obj.Pop();
        System.out.println("Poped Element is "+iRet);

        obj.Display();
        iRet = obj.Pop();
        System.out.println("Poped Element is "+iRet);


        obj.Display();
        iRet = obj.Pop();
        System.out.println("Poped Element is "+iRet);

        obj.Display();
        iRet = obj.Pop();
        System.out.println("Poped Element is "+iRet);

    }
}