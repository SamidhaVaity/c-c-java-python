import java.util.*;

class Program226
{
    public static boolean CheckBit(int iNo, int ipos)
    {

        int iMask = 0x00000001; 
        int iResult = 0;
        
        iMask = iMask<<(ipos-1);
        
        iResult = iNo & iMask;

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
        int iNo = 0, ipos =0;
        boolean bRet = false;

        System.out.println("Enter number: ");
        iNo = sobj.nextInt();

        System.out.println("Enter the position: ");
        ipos = sobj.nextInt();
        bRet = CheckBit(iNo, ipos);

        if(bRet==true)
        {
            System.out.println("Bit is ON at given position.");
        }
        else
        {
            System.out.println("Bit is OFF at given position.");
        }
    }
       
}