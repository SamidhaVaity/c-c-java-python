import  java.util.*;
import ABC.Matrix;

class MyMatrix extends Matrix 
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void SwapRows()
    {
        
        
    }
}

class Assignment46_5
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int Row = 0, Col = 0, iRet = 0, iValue = 0;

        System.out.println("Enter the number of rows: ");
        Row = sobj.nextInt();

        System.out.println("Enter the number of columns: ");
        Col = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(Row, Col);

        mobj.Accept();
        mobj.Display();

        mobj.SwapRows();
        mobj = null;
        System.gc();
    }
}