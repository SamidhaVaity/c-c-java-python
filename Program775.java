import  java.util.*;
import ABC.Matrix;

class MyMatrix extends Matrix 
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public int Summation()
    {
        int i=0, j=0, iSum=0;
        for(i=0; i<Arr.length; i++)
        {
            for(j=0; j<Arr[i].length; j++)
            {
                if(i==j)
                {
                    iSum = iSum+Arr[i][j];
                }
            }
        }
        return iSum;
    }
}

class Assignment46_1
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int Row = 0, Col = 0, iRet = 0;

        System.out.println("Enter the number of rows: ");
        Row = sobj.nextInt();

        System.out.println("Enter the number of columns: ");
        Col = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(Row, Col);

        mobj.Accept();
        mobj.Display();

        iRet = mobj.Summation();
        System.out.println("Addition is: "+iRet);
        mobj = null;
        System.gc();
    }
}