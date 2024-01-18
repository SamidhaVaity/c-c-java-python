import java.util.*;

class Assignment37_1
{
    public static boolean CheckBit(int No)
    {
        int iMask = 0X00004000; 

        int iResult = 0;
        iResult = No & iMask;

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
        int No = 0; 
        boolean bRet = false;

        System.out.println("Enter the number : ");
        No = sobj.nextInt();

        bRet = CheckBit(No);

        if(bRet==true)
        {
            System.out.println("The 15th bit is ON");
        }
        else
        {
            System.out.println("The 15th bit is OFF");
        }
    }
}