import java.util.*;

class Assignment36_4
{
    public static void StrRev(String str)
    {
        int iCnt = 0;
        String reverse = "";
        for(iCnt=str.length()-1; iCnt>=0; iCnt--)
        {
            reverse = reverse + str.charAt(iCnt);
        }

        System.out.print(reverse);
        
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        System.out.println("Enter first string :");
        str = sobj.nextLine();

        StrRev(str);

        sobj.close();
    }
}