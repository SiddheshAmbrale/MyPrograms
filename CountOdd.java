/* Write a program which accept number from user and return the count of Even digits?

Input : 1246
Output : 1

Input : 367859
Output : 4

*/

import java.util.*;

class Odd
{
    public int ino;

    public Odd(int i)
    {
        ino = i;
    }

    public int OddCount()
    {
        int icnt=0;
        int idigit=0;

        while(ino!=0)
        {
            idigit = ino % 10;
            ino = ino / 10;

            if(idigit % 2!=0)
            {
                icnt++;           
            }
        }
        return icnt;
    }
}

class CountOdd
{
    public static void main(String[] args)
    {
        int ino = 0;
        int iret = 0;

        Scanner obj = new Scanner(System.in);
        System.out.println("Enter the Digit : ");
        ino = obj.nextInt();

        Odd E = new Odd(ino);
        iret = E.OddCount();

        System.out.println(+iret);

    }
}