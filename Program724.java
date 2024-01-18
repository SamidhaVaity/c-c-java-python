import java.util.*;

class Assignment33_1
{
    public static int Difference(int Brr[])
    {
        int iCnt = 0, iSum = 0, iAdd = 0;

        for(iCnt=0; iCnt<Brr.length; iCnt++)
        {
            if(((Brr[iCnt])%2)==0)
            {
                iSum = iSum+Brr[iCnt];
            }
            else
            {
                iAdd = iAdd+Brr[iCnt];
            }
        }
        return iSum - iAdd;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0, iCnt = 0, iAns = 0;
        System.out.println("The numbe of elements you want to enter ");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements ");
        for(iCnt = 0; iCnt<Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }

        iAns = Difference(Arr);
        System.out.println("The difference is "+iAns);

        sobj.close();
    }
}