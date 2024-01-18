import java.util.*;

class Assignment34_1
{
    public static int CountEven(int Num)
    {
        int Even = 0;
        int iDigit = 0;

        while(Num!=0)
        {
            iDigit = Num%10;
            if((iDigit%2)==0)
            {
                Even++;
            }
            Num = Num/10;
        }
        return Even;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iRet =0;

        System.out.println("Enter the number: ");
        iNo = sobj.nextInt();

        iRet = CountEven(iNo);
        System.out.println("Even numbers in digit are"+iRet);

        sobj.close();
    }
}