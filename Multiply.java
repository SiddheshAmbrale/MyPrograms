/* Write a program which accept number from user and return the Multiplication of all digits?

Input : 2395
Output : 270

Input : 922432
Output : 864

*/

import java.util.*;

class Multiplication
{
    public int ino;

    public Multiplication(int i)
    {
        ino = i;
    }

    public int Count()
    {
        int idigit=0;
        int ans=1;

        while(ino!=0)
        {
            idigit = ino % 10;
            ino = ino / 10;
            ans = ans * idigit;
        }
        return ans;
    }
}

class Multiply
{
    public static void main(String[] args)
    {
        int ino = 0;
        int iret = 0;

        Scanner obj = new Scanner(System.in);
        System.out.println("Enter the Digit : ");
        ino = obj.nextInt();

        Multiplication M = new Multiplication(ino);
        iret=M.Count();

        System.out.println(+iret);

    }
}