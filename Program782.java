import  java.util.*;
import ABC.Matrix;

class MyMatrix extends Matrix 
{
    
    public int Brr[][];
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public void ArrayColumns()
    {
        int i=0, j=0, temp=0;
        System.out.println("Reverse Rows Matrix is:");
        for(i=0; i<Arr.length; i++)
        {
            for(j=0; j<Arr[i].length; j++)
            {
                temp = Arr[i][j];
                Arr[j][j]=Arr[i][Arr[i].length-j-1];
                Arr[i][Arr[i].length-j-1]=temp;
                System.out.print(Arr[i][j]+"\t");
            }   
            System.out.println();
        }  
    }

}

class Assignment47_3
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

        mobj.ArrayColumns();

        mobj = null;
        System.gc();
    }
}