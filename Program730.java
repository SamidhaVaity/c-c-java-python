import java.util.*;

class Assignment35_2
{
    public static int FirstOcc(int Arr[], int No)
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if(Arr[iCnt]==No)
            {
                break;
            }
            iCount++;
        }
        return iCount;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iNo = 0;
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

        System.out.println("Enter the number you want to search");
        iNo = sobj.nextInt();

        iRet = FirstOcc(Arr, iNo);
        System.out.println("The index number for first occurance of number is "+iRet);

        sobj.close();
    }
}