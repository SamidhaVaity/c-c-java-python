import java.util.*;

class Assignment38_4
{
    public static int ToggleBit(int No)
    {
        int iMask = 0x00000240;
        int iResult = 0;
        iResult = No^iMask;
        return iResult;  
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();

        iRet = ToggleBit(iNo);
        System.out.println("Updated string is : "+iRet);
        sobj.close();
    }
}