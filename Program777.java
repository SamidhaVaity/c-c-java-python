import  java.util.*;
import ABC.Matrix;

class MyMatrix extends Matrix 
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public int MaxDiagonal()
    {
        int i=0, j=0, iMax=Arr[0][0];
        for(i=0; i<Arr.length; i++)
        {
            for(j=0; j<Arr[i].length; j++)
            {
                if(i==j)
                {
                    if(Arr[i][j]>iMax)
                    {
                        iMax = Arr[i][j];
                    }
                }
                if((i+j)==(Arr.length-1))
                {
                    if(Arr[i][j]>iMax)
                    {
                        iMax = Arr[i][j];
                    }
                }
            }
        }
        return iMax;
    }
}

class Assignment46_3
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

        iRet = mobj.MaxDiagonal();
        System.out.println("Largest number from both diagonal is: "+iRet);
        mobj = null;
        System.gc();
    }
}