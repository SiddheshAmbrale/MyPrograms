import java.util.*;

class ReverseTriangle1
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter number of rows : ");
        int irow = sobj.nextInt();

        for(int i=1;i<=irow;i++)
        {
            for(int j=1;j<=i;j++)
            {
                System.out.print(" ");
            }
            for(int k=i;k<=irow;k++)
            {
                System.out.print("* ");
            }
            System.out.println();
        }
    }
}