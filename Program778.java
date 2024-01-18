import  java.util.*;
import ABC.Matrix;

class MyMatrix extends Matrix 
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void AddColumns()
    {
        int i=0, j=0, iSum=0;
        for(i=0; i<Arr.length; i++)
        {
            for(j=0; j<Arr[i].length; j++)
            {
                iSum = iSum+Arr[j][i];
            }
            System.out.println("Addition of "+j+" column is "+iSum);
            iSum = 0;
        } 
    }
}

class Assignment46_4
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

        mobj.AddColumns();
        mobj = null;
        System.gc();
    }
}