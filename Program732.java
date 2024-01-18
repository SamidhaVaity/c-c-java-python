import java.util.*;

class Assignment35_4
{
    public static void Display(int Arr[], int No1, int No2)
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt]>=No1)&&(Arr[iCnt]>=No2))
            {
                System.out.print(Arr[iCnt]+" ");
            }
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iNo1 = 0, iNo2=0;
        int iCnt = 0;

        System.out.println("Enter the size of array");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements");
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            Arr[iCnt]=sobj.nextInt();
        }

        System.out.println("Enter the range of number you want to display");
        iNo1 = sobj.nextInt();
        iNo2 = sobj.nextInt();

        Display(Arr, iNo1, iNo2);
        
        sobj.close();
    }
}