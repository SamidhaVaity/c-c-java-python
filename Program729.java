import java.util.*;

class Assignment35_1
{
    public static boolean CheckInt(int Arr[], int No)
    {
        int iCnt = 0;

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt]==No)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iNo = 0;
        int iCnt = 0;
        boolean bRet = false;

        System.out.println("Enter the size of array");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements");
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        System.out.println("Enter the number you want to search");
        iNo = sobj.nextInt();

        bRet = CheckInt(Arr, iNo);
        if(bRet==true)
        {
            System.out.println("TRUE");
        }
        else 
        {
            System.out.println("FALSE");
        }

        sobj.close();
    }
}