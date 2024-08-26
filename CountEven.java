/* Write a program which accept number from user and return the count of Even digits?

Input : 1234
Output : 2

Input : 367854
Output : 3

*/

import java.util.*;

class Even
{
    public int ino;

    public Even(int i)
    {
        ino = i;
    }

    public int EvenCount()
    {
        int icnt=0;
        int idigit=0;

        while(ino!=0)
        {
            idigit = ino % 10;
            ino = ino / 10;

            if(idigit % 2==0)
            {
                icnt++;            }
        }
        return icnt;
    }
}

class CountEven
{
    public static void main(String[] args)
    {
        int ino = 0;
        int iret = 0;

        Scanner obj = new Scanner(System.in);
        System.out.println("Enter the Digit : ");
        ino = obj.nextInt();

        Even E = new Even(ino);
        iret = E.EvenCount();

        System.out.println(+iret);

    }
}