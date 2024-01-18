import java.util.*;

class Assignment36_2
{
    public static boolean StrCmpX(String str1, String str2)
    {
        int iCnt = 0;
        char Arr[] = str1.toCharArray();

        char Brr[] = str2.toCharArray();

        if(Arr==Brr)
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
        boolean bRet = false;
        String str1 = null;
        String str2 = null;

        System.out.println("Enter first string :");
        str1 = sobj.nextLine();

        System.out.println("Enter Second string :");
        str2 = sobj.nextLine();

        bRet = StrCmpX(str1, str2);
        if(bRet==true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }

        sobj.close();
    }
}