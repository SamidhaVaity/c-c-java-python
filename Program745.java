import java.util.*;

class Assignment38_2
{
    public static int OffBit(int No)
    {
        int iMask = 0x00000240;
        int iResult = 0;
        iResult = No & iMask;

        if(iResult == iMask)
        {
            return No^iMask;
        } 
        else
        {
            return No;
        }
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();

        iRet = OffBit(iNo);
        System.out.println("Updated string is : "+iRet);
        sobj.close();
    }
}