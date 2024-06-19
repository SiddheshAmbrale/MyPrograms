/* Write a java program which accept number from user and return the count of digits in between 3 and 7.

Input : 2395
Output : 1

Input : 1018
Output : 0

Input : 4521
Output: 2

Input : 9922
Output: 0

*/

import java.util.*;

class program148
{
    public static int CountRange(int ino)
    {
        int idigit = 0;
        int icnt=0;

        while(ino!=0)
        {
            idigit = ino % 10;
            ino = ino / 10;

            if(idigit>3 && idigit<7)
            {
                icnt++;
            }
        }
        return icnt;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int ivalue = 0;
        int iret=0;

        System.out.println("Enter the number");
        ivalue = sobj.nextInt();

        iret = CountRange(ivalue);
        System.out.println("Count Between 3 and 7 is : "+iret);


    }
}