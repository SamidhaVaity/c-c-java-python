import java.util.*;

class Assignment34_5
{
    public static int CountDiff(int Num)
    {
        int Even = 0;
        int Odd = 0;
        int iDigit = 0;

        while(Num!=0)
        {
            iDigit = Num%10;
            if((iDigit%2)==0)
            {
                Even=Even+iDigit;
            }
            if((iDigit%2)!=0)
            {
                Odd=Odd+iDigit;
            }
            Num = Num/10;
        }
        return Even-Odd;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iRet =0;

        System.out.println("Enter the number: ");
        iNo = sobj.nextInt();

        iRet = CountDiff(iNo);
        System.out.println("The difference between even and odd nos. of digit is"+iRet);

        sobj.close();
    }
}