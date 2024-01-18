import java.util.*;

class Program192
{
    public static int EvenOddFactors(int iNo)
    {
        int iCnt = 0, iProd=1;

        for(iCnt =1; iCnt<=iNo; iCnt++)
        {
            if((iNo%iCnt)==0)
            {
                if((iCnt%2)==0)
                {
                    System.out.println("Even Factor is "+iCnt);
                }
                else
                {
                    System.out.println("Odd Factor is "+iCnt);
                }
            }
        }
        return iProd;
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