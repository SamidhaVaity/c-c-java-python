import java.util.*;

class Assignment32_5
{
    public static void Reverse(String str)
    {
        int iCnt = 0;
        char Arr[] = str.toCharArray();
        int n = Arr.length;
        int end = n-1;

        while(iCnt<=end)
        {
            char temp = Arr[iCnt];
            Arr[iCnt] = Arr[end];
            Arr[end] = temp;
            iCnt++;
            end--;
        }
        String reverse = String.valueOf(Arr); 
        System.out.println("Reversed string is :"+reverse);
        
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;
        System.out.println("Enter the String :");
        str = sobj.nextLine();

        Reverse(str);
        
        sobj.close();
    }
}