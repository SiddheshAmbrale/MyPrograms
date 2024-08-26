/* Write a program which accept Number from user and Display prime number till that Number?

Input : 10

Output : 2  5  3  7

 */

import java.util.*;

class Prime
{
    public int iNo = 0;

    public Prime(int i)
    {
        iNo = i;
    }

    public void display()
    {
        
        boolean bRet = true;

        for(int i=2;i<=iNo;i++)
        {
            bRet = true;

            for(int j=2;j<=(i/2);j++)
            {
                if(i % j == 0)
                {
                    bRet = false;
                    break;
                }
            }
            if(bRet==true)
            {
                System.out.print(i +" ");
            }
        }
    }
}

class DisplayPrime
{
    public static void main(String[] args)
    {
        int ino = 0;
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter any Number : ");
        ino = obj.nextInt();

        Prime P = new Prime(ino);

        P.display();

    }
}