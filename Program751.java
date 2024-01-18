import java.util.*;

class Assignment39_3
{
    public static int OnBit(int iNo, int ipos)
    {
        int iMask = 0x00000001;
        int iResult = 0;

        iMask = iMask <<(ipos-1);

        iResult = iNo & iMask;
        if(iResult!=iNo)
        {
            return (iNo | iMask);
        }
        else
        {
            return iNo;
        }

    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iNo = 0;
        int iPos = 0;
        int iRet = 0;

        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter the number : ");
        iPos = sobj.nextInt();

        iRet = OnBit(iNo, iPos);
        
        System.out.println("Updated number is "+iRet);
    }
}