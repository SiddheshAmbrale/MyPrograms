import java.util.*;

class ReverseTriangle2
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of rows : ");
        int irow = sobj.nextInt();

        for(int i=irow;i>0;i--)
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
        }
    }
}