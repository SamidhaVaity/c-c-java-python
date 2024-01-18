import java.util.*;

class Assignment33_5
{
    public static void Display(int Brr[])
    {
        int iCnt = 0;
        for(iCnt=0; iCnt<Brr.length; iCnt++)
        {
            if(((Brr[iCnt])%11)==0)
            {
                System.out.print(Brr[iCnt]+"\t");
            }
        }
    }
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize =0, iCnt=0;
        System.out.println("The number of elements you want to enter");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter the elements");
        for(iCnt=0; iCnt<Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt(); 
        }

        Display(Arr);
        sobj.close();

    }
}