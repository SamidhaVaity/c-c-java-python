import java.util.*;
import LB.Matrix;

class MyMatrix extends Matrix
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public int CountEven()
    {
        int i=0, j=0, iCnt=0;

        for(i=0; i<Arr.length; i++)
        {

            for(j=0; j<Arr[i].length; j++)
            {
                if( (Arr[i][j]%2)==0)
                {
                    iCnt++;
                }
            }
        }
        
        return iCnt;
    }
}

class Program342
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0, iCol = 0, iRet = 0;

        System.out.println("Enter number of rows : ");
        iRow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        iCol = sobj.nextInt();
        
        MyMatrix mobj = new MyMatrix(iRow,iCol);

        mobj.Accept();
        mobj.Display();

        // Function calls

        iRet = mobj.CountEven();
        System.out.println("Even Elements are"+iRet);

        mobj = null;
        System.gc();
    }
}