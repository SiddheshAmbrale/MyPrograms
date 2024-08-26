/* Write a program which accept number from user and if Number is less than 50 then print Small,
If number is greater than 50 and less than 100 printf small,and if number is  Greater than 100 
print Large.

Input : 10
Output : Small

Input : 59
Output : Medium

Input : 120
Output : Large

*/

import java.util.*;

class Large
{
    public int iNo;

    public Large(int i)
    {
        iNo = i;
    }

    public void LargeN()
    {
        if(iNo<50)
        {
            System.out.println("Small..");
        }
        else if(iNo>=50 && iNo<100)
        {
            System.out.println("Medium..");
        }
        if(iNo>=100)
        {
            System.out.println("Large..");
        }
    }
}

class LargeNumber
{
    public static void main(String[] args)
    {
        int ino = 0;
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter any Number : ");
        ino = obj.nextInt();

        Large L = new Large(ino);

        L.LargeN();

    }
}