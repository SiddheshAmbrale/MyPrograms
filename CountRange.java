/* Write a program which accept number from user and return the count of digits in between 3 and 7 ?

Input : 2395
Output : 1

Input : 1018
Output : 0

Input : 4521
Output : 2

*/

import java.util.*;

class Range
{
    public int ino;

    public Range(int i)
    {
        ino = i;
    }

    public int RangeCount()
    {
        int icnt=0;
        int idigit=0;

        while(ino!=0)
        {
            idigit = ino % 10;
            ino = ino / 10;

            if(idigit<7 && idigit>3)
            {
                icnt++;            
            }
        }
        return icnt;
    }
}

class CountRange
{
    public static void main(String[] args)
    {
        int ino = 0;
        int iret = 0;

        Scanner obj = new Scanner(System.in);
        System.out.println("Enter the Digit : ");
        ino = obj.nextInt();

        Range R = new Range(ino);
        iret = R.RangeCount();

        System.out.println(+iret);

    }
}