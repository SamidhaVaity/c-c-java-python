import  java.util.*;
import ABC.Matrix;

class MyMatrix extends Matrix 
{
    
    public int Brr[][];
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void ChkIdentity()
    {
        int i=0, j=0, identity=0;
        for(i=0; i<Arr.length; i++)
        {
            for(j=0; j<Arr[i].length; j++)
            {
                if(i==j && Arr[i][j]!=1)
                {
                    identity =0;
                }
                if(i!=j && Arr[i][j]!=0)
                {
                    identity =0;
                }
            }
        }  
        if(identity==0)
        {
            System.out.println("True");
        }
        else
        {
            System.out.println("False");
        }
    }

}

class Assignment47_4
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

        mobj.ChkIdentity();

        mobj = null;
        System.gc();
    }
}