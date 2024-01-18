import java.util.*;

class Assignment37_5
{
    public static boolean CheckBit(int No)
    {
        int iMask = 0X80000001;
        int iResult = 0;
        iResult = iMask & No;
        
        if(iResult==iMask)
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
        boolean bRet = false;

        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();

        bRet = CheckBit(iNo);
        if(bRet==true)
        {
            System.out.println("The 1st and 32nd bits are ON");
        }
        else
        {
            System.out.println("Bits are OFF");
        }
    }
}