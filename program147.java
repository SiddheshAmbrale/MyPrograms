/* Write a java program which accept number from user and return the count of odd digits.

Input : 2395
Output : 3

Input : 1018
Output : 2

Input : -1018
Output: 2

Input : 2468
Output: 0

*/

import java.util.*;

class program147
{
    public static int CountOdd(int ino)
    {
        int idigit = 0;
        int icnt=0;

        while(ino!=0)
        {
            idigit = ino % 10;
            ino = ino / 10;

            if(idigit%2!=0)
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

        iret = CountOdd(ivalue);
        System.out.println("Odd Count is : "+iret);


    }
}