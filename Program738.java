import java.util.*;

class Assignment36_5
{
    public static boolean StrPallindrome(String str)
    {
        String iCopy = str;
        int iCnt = 0;
        String reverse = "";
        for(iCnt=str.length()-1; iCnt>=0; iCnt--)
        {
            reverse = reverse + str.charAt(iCnt);
        }

        if(iCopy == reverse)
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
        String str = null;
        boolean bRet = false;

        System.out.println("Enter first string :");
        str = sobj.nextLine();

        bRet = StrPallindrome(str);

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