import java.util.*;

class Program190
{
    public static int Factorial(int iNo)
    {
        int iCnt = 0, iProd=1;
        for(iCnt=1; iCnt<=iNo; iCnt++)
        {
            iProd = iProd*iCnt;
        }
        return iProd;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0, iAns =0;
        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        iAns = Factorial(iNo);
        System.out.println("Factorial is "+iAns);
        sobj.close();

    }
}