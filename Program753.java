import java.util.*;

class Assignment39_5
{
    public static int Toggle(int iNo)
    {
        int iMask = 0x00000001;
        int iResult = 0;

        iResult = iNo ^ iMask;
        return iResult;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        
        int iNo = 0;
        int iPos = 0;
        int iRet = 0;

        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();

        iRet = Toggle(iNo);
        
        System.out.println("Updated number is "+iRet);
    }
}