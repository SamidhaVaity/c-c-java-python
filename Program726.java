import java.util.*;

class Assignment34_3
{
    public static int CountRange(int Num)
    {
        int iCount = 0;
        int iDigit = 0;

        while(Num!=0)
        {
            iDigit = Num%10;
            if((iDigit>=3)&&(iDigit<=7))
            {
                iCount++;
            }
            Num = Num/10;
        }
        return iCount;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iRet =0;

        System.out.println("Enter the number: ");
        iNo = sobj.nextInt();

        iRet = CountRange(iNo);
        System.out.println("The numbers in digit are"+iRet);

        sobj.close();
    }
}