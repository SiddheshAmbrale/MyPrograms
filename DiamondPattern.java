import java.util.*;

class DiamondPattern
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number of rows : ");
        int irow = sobj.nextInt();

        for(int i=1;i<=irow;i++)
        {
            for(int j=i;j<=irow;j++)
            {
                System.out.print(" ");
            }
            for(int k=1;k<=(2*i-1);k++)
            {
                System.out.print("*");
            }
            System.out.println();
            for(int a=1;a<=i;a++)
            {
                System.out.print(" ");
            }
            for(int b=i;b<=irow;b++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}