import java.util.*;

class Program193
{
    public static void EvenOddFactors(int iNo)
    {
        int iCnt = 0;
        int iSumEven = 0;
        int iSumOdd = 0;

        for(iCnt =1; iCnt<=iNo; iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                if((iCnt%2)==0)
                {
                    iSumEven = iSumEven + iCnt;
                }
                else
                {
                    iSumOdd = iSumOdd + iCnt;
                }
            }
        }
        System.out.println("Addition of even factor is :"+iSumEven);
        System.out.println("Addition of even factor is :"+iSumOdd);
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0, iAns =0;
        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        EvenOddFactors(iNo);
        sobj.close();

    }
}