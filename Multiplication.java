/* Write a program which accept Three input and display its Multiplication ?

Input : 5   4   7
Output : 140

Input : 2   4   8
Output : 64

*/

import java.util.*;

class Multi
{
    public int iNo1;
    public int iNo2;
    public int iNo3;

    public Multi(int i,int j,int k)
    {
        iNo1 = i;
        iNo2 = j;
        iNo3 = k;
    }

    public void Display()
    {
        int ans = 0;

        ans = iNo1 * iNo2 * iNo3;
        System.out.println("Multiplication is : "+ans);

    }
}

class Multiplication
{
    public static void main(String[] args)
    {
        int ino1 = 0;
        int ino2 = 0;
        int ino3 = 0;

        Scanner obj = new Scanner(System.in);
        System.out.println("Enter First Number : ");
        ino1 = obj.nextInt();
        System.out.println("Enter Second Number : ");
        ino2 = obj.nextInt();
        System.out.println("Enter Third Number : ");
        ino3 = obj.nextInt();

        Multi M = new Multi(ino1,ino2,ino3);

        M.Display();

    }
}
