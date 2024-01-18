import java.util.*;

class Assignment34_2
{
    public static int CountOdd(int Num)
    {
        int Odd = 0;
        int iDigit = 0;

        while(Num!=0)
        {
            iDigit = Num%10;
            if((iDigit%2)!=0)
            {
                Odd++;
            }
            Num = Num/10;
        }
        return Odd;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iRet =0;

        System.out.println("Enter the number: ");
        iNo = sobj.nextInt();

        iRet = CountOdd(iNo);
        System.out.println("Odd numbers in digit are"+iRet);

        sobj.close();
    }
}