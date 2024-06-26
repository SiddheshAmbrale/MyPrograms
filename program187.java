/* Write a program which accept matrix from user and return addition of diagonal element.

Input : 

3       2       5       9
4       3       2       2
8       4       1       5
3       9       7       5

Output :  12

*/

import java.util.*;

class Matrix
{
    protected int Arr[][];

    public Matrix (int A,int B)
    {
        Arr = new int [A][B];
    }

    protected void finalize()
    {
        Arr = null;
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        int i=0;
        int j=0;

        System.out.println("Enter the Elements : ");
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

    }

    public void Display()
    {
        int i=0;
        int j=0;

        System.out.println("Entered Elements are : ");
        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }
    
}

class MyMatrix extends Matrix
{
    public MyMatrix(int A,int B)
    {
        super(A,B);
    }

    public int AddDiagonal()
    {
        int i=0;
        int j=0;
        int isum = 0;

        for(i=0;i<Arr.length;i++)
        {
            for(j=0;j<Arr[i].length;j++)
            {
                if(Arr[i]==Arr[j])
                {
                    isum = isum + Arr[i][j];
                }
            }
            
        }
        return isum;

    }

    


}

class program187
{
    public static void main (String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        int irow = 0;
        int icol = 0;

        System.out.println("Enter number of rows : ");
        irow = sobj.nextInt();

        System.out.println("Enter number of columns : ");
        icol = sobj.nextInt();

        MyMatrix mobj = new MyMatrix(irow,icol);

        mobj.Accept();
        mobj.Display();

        int iret = 0;
        iret = mobj.AddDiagonal();
        System.out.println("Additio Diagonal  elements is : "+iret);

        mobj = null;
        System.gc();

    }
}
