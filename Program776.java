import  java.util.*;
import ABC.Matrix;

class MyMatrix extends Matrix 
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public int Frequency(int iNo)
    {
        int i=0, j=0, iCnt=0;
        for(i=0; i<Arr.length; i++)
        {
            for(j=0; j<Arr[i].length; j++)
            {
                if(Arr[i][j]==iNo)
                {
                    iCnt++;
                }
            }
        }
        return iCnt;
    }
}

class Assignment46_2
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

        System.out.println("Enter the number of you want to search: ");
        iValue = sobj.nextInt();

        iRet = mobj.Frequency(iValue);
        System.out.println("Frequency is: "+iRet);
        mobj = null;
        System.gc();
    }
}