import java.util.*;

class Program194
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        
        for(iCnt =1; iCnt<=iNo; iCnt++)
        {
            System.out.print("* "+"\t"+iCnt+"\t");
        }
        System.out.println();
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0, iAns =0;
        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        Display(iNo);
        sobj.close();

    }
}