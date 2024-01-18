import java.util.*;

class Assignment32_3
{
    public static int CountDiff(String str)
    {
        int iCnt = 0;
        int iCap = 0;
        int iSmall = 0;
        char Arr[] = str.toCharArray();

        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            if((Arr[iCnt]>='a')&&(Arr[iCnt]<='z'))
            {
                iSmall++;
            }
            else if((Arr[iCnt]>='A')&&(Arr[iCnt]<='Z'))
            {
                iCap++;
            }

        }
        return iSmall-iCap;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        String str = null;
        System.out.println("Enter the String :");
        str = sobj.nextLine();

        iRet = CountDiff(str);
        System.out.println("Difference between capital and small characters is "+iRet);
        sobj.close();
    }
}