import java.util.*;

class Assignment38_5
{
    public static int OnBit(int No)
    {
        
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0;
        int iRet = 0;

        System.out.println("Enter the number : ");
        iNo = sobj.nextInt();

        iRet = OnBit(iNo);
        System.out.println("Updated string is : "+iRet);
        sobj.close();
    }
}