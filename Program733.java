import java.util.*;

class Assignment35_5
{
    public static int Product(int Arr[])
    {
        int iCnt = 0;
        int iProd = 1;

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt]%2)!=0)
            {
                iProd = iProd*Arr[iCnt];
            }
        }
        return iProd;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iCnt = 0;
        int iRet = 0;

        System.out.println("Enter the size of array");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements");
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        iRet = Product(Arr);
        System.out.println("The product of odd number from array is"+iRet);
        
        sobj.close();
    }
}