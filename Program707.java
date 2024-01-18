import java.util.*;

class Assignment32_4
{
    public static boolean ChkVowel(String str)
    {
        int iCnt = 0;
        int iCount = 0;
        char Arr[] = str.toCharArray();

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt]=='a')||(Arr[iCnt]=='e')||(Arr[iCnt]=='i')||(Arr[iCnt]=='o')||(Arr[iCnt]=='z'))
            {
                return true;
            }

        }
        
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        boolean bRet = false;

        String str = null;
        System.out.println("Enter the String :");
        str = sobj.nextLine();

        bRet = ChkVowel(str);
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