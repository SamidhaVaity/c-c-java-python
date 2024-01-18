import java.util.*;

class Assignment34_4
{
    public static int Multiply(int Num)
    {
        int iprod = 1;
        int iDigit = 0;

        while(Num!=0)
        {
            iDigit = Num%10;
            if(iDigit==0)
            {
                iDigit =1;
            }
            iprod = iprod * iDigit;
            Num = Num/10;
        }
        return iprod;
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int iNo = 0, iRet =0;

        System.out.println("Enter the number: ");
        iNo = sobj.nextInt();

        iRet = Multiply(iNo);
        System.out.println("The multiplication of digit  is"+iRet);

        sobj.close();
    }
}