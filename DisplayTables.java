/* Write a program which accepts a number from user and display the Multiplication Table till that number?

Input : 10

Output: 1  2  3  4  5  6  7  8  9  10 
        2  4  6  8  10 12 14 16 18 20 
        3  6  9  12 15 18 21 24 27 30 
        4  8  12 16 20 24 28 32 36 40 
        5  10 15 20 25 30 35 40 45 50 
        6  12 18 24 30 36 42 48 54 60 
        7  14 21 28 35 42 49 56 63 70 
        8  16 24 32 40 48 56 64 72 80 
        9  18 27 36 45 54 63 72 81 90
        10 20 30 40 50 60 70 80 90 100 

*/

import java.util.*;

class Tables
{
    public int iNo = 0;

    public Tables(int i)
    {
        iNo = i;
    }

    public void MultiTable()
    {
        int ans=0;

        for(int i=1;i<=iNo;i++)
        {
            for(int j=1;j<=10;j++)
            {
                ans = i * j;
                System.out.print(+ans +" ");

            }
            System.out.println();
        }
    }
}

class DisplayTables
{
    public static void main(String[] args)
    {
        int ino=0;
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter the Number to Display Tables : ");
        ino = obj.nextInt();

        Tables T = new Tables(ino);

        T.MultiTable();

    }
}