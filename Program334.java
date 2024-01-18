import java.util.*;

interface Calculation
{
    public int Maximum();
    public int Minimum();
}
class Matrix
{
    protected int Arr[][];

    public Matrix(int A, int B)
    {
        Arr = new int[A][B];
    }

    protected void finalize()
    {
        Arr = null;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int i=0, j=0;

        System.out.println("Enter the elements: ");
        for(i=0; i<Arr.length; i++)
        {
            for(j=0; j<Arr[i].length; j++)
            {
                Arr[i][j]=sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i=0, j=0;
        System.out.println("Enterd elements are : ");
        for(i=0; i<Arr.length; i++)
        {
            for(j=0; j<Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }  
}

class MyMatrix extends Matrix implements Calculation
{
    public MyMatrix(int A, int B)
    {
        super(A,B);
    }

    public int Summation()
    {
        int i=0, j=0, iSum = 0;
        for(i=0; i<Arr.length; i++)
        {
            for(j=0; j<Arr[i].length; j++)
            {
                iSum = iSum+Arr[i][j];
            }
        }
        return iSum;
    }

    public int Maximum()
    {
        int i=0, j=0, iMax = Arr[0][0];
        for(i=0; i<Arr.length; i++)
        {
            for(j=0; j<Arr[i].length; j++)
            {
                if(iMax<Arr[i][j])
                {
                    iMax = Arr[i][j];
                }
            }
        }
        return iMax;
    }

    public int Minimum()
    {
        int i=0, j=0, iMin = Arr[0][0];
        for(i=0; i<Arr.length; i++)
        {
            for(j=0; j<Arr[i].length; j++)
            {
                if(iMin>Arr[i][j])
                {
                    iMin = Arr[i][j];
                }
            }
        }
        return iMin;
    }
}

class Program334
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRow = 0,iCol =0, iRet=0;

        System.out.println("Enter the number of rows: ");
        iRow = sobj.nextInt();

        System.out.println("Enter the number of columns: ");
        iCol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();
        iRet = mobj.Summation();
        

        System.out.println("Addition is "+iRet);

        iRet = mobj.Maximum();
        System.out.println("Largest number is "+iRet);

        iRet = mobj.Minimum();
        System.out.println("smallest number is "+iRet);

        mobj = null;
        System.gc();
    }
}