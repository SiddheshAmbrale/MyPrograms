/* Write a java program which accept number from user and return the count of even digits.

Input : 2395
Output : 1

Input : 1018
Output : 2

*/

import java.util.*;

class program146
{
    public static int CountEven(int ino)
    {
        int idigit = 0;
        int icnt=0;

        while(ino!=0)
        {
            idigit = ino % 10;
            ino = ino / 10;

            if(idigit%2==0)
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

        iret = CountEven(ivalue);
        System.out.println("Even Count is : "+iret);


    }
}