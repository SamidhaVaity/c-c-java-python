import  java.util.*;
import ABC.Matrix;

class MyMatrix extends Matrix 
{
    
    public int Brr[][];
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void TransPose()
    {
        int i=0, j=0;
        System.out.println("Tranapose Matrix is:");
        for(i=0; i<Arr[i].length; i++)
        {
            for(j=0; j<Arr.length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }      
            System.out.println();      
        }  
    }

}

class Assignment47_1
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

        mobj.TransPose();
        mobj = null;
        System.gc();
    }
}