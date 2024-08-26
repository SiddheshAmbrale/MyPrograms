/* Write a program which accept number from user and display its table in reverse order ?

Input : 5
Output : 50  45  40  35  30  25  20  15  10  5  

*/

import java.util.*;

class Reverse
{
    public int iNo;

    public Reverse(int i)
    {
        iNo = i;
    }

    public void ReverseT()
    {
        if(iNo<0)
        {
            iNo = -iNo;
        }
        int i = 0;

        for(i=10;i>=1;i--)
        {
            System.out.println(iNo * i);
        }
    }
}

class ReverseTable
{
    public static void main(String[] args)
    {
        int ino = 0;
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter Number : ");
        ino = obj.nextInt();

        Reverse R = new Reverse(ino);

        R.ReverseT();
    }
}