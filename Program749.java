import java.util.*;

class Assignment39_1
{
    public static boolean ChkBit(int iNo, int ipos)
    {
        int iMask = 0x00000001;
        int iResult = 0;

        iMask = iMask <<(ipos-1);

        iResult = iNo & iMask;
        if(iResult==iNo)
        {
            return true;
        }
        else
        {
            return false;
        }

    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iNo = 0;
        int iPos = 0;
        boolean bRet = false;

        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();

        System.out.println("Enter the number : ");
        iPos = sobj.nextInt();

        bRet = ChkBit(iNo, iPos);
        if(bRet == true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }
    }
}