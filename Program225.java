import java.util.*;

class Program225
{
    public static int OffBit(int iNo, int ipos)
    {

        int iMask = 0x00000001; 
        int iResult = 0;
        
        iMask = iMask<<(ipos-1);
        
        iResult = iNo & iMask;

        if(iResult==iMask)
        {
            return(iNo^iMask);
        }
        else
        {
            return iNo;
        }
        
    }
    

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, ipos =0;
        int iRet = 0;

        System.out.println("Enter number: ");
        iNo = sobj.nextInt();

        System.out.println("Enter the position: ");
        ipos = sobj.nextInt();
        iRet = OffBit(iNo, ipos);

        System.out.println("Updated number is : "+iRet);
    }
       
}