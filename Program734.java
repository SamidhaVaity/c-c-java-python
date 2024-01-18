import java.util.*;

class Assignment36_1
{
    public static String StrNCat(String src, String dest, int no)
    {
        int iCnt = 0;
        char Arr[] = dest.toCharArray();
        String str = null;
        for(iCnt=0; iCnt<no; iCnt++)
        {
            str = str+Arr[iCnt];
        }
        return str;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int No = 0;
        String Ret = null;
        String str1 = null;
        String str2 = null;

        System.out.println("Enter first string :");
        str1 = sobj.nextLine();

        System.out.println("Enter Second string :");
        str2 = sobj.nextLine();

        System.out.println("Enter number of characters you want to concat :");
        No = sobj.nextInt();

        Ret = StrNCat(str1, str2, No);
        System.out.print("Updated string is "+str1 + " "+Ret);

        sobj.close();
    }
}