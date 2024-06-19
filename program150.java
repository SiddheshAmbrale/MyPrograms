/* Write a java program which accept number from user and return difference between summation of even digits and summation of odd digits.

Input : 2395
Output : -15 (2-17)

Input : 1018
Output : 6  (8-2)

Input : 8440
Output: 16 (16-0)

Input : 5733
Output: -18 (0-18)

*/

import java.util.*;

class program150
{
    public static int CountDiff(int ino)
    {
        int idigit = 0;
        int isum1=0;
        int isum2=0;
        int icnt=0;

        while(ino!=0)
        {

            for(icnt=1;icnt<=ino;icnt++)
            {
                idigit = ino % 10;
                ino = ino / 10;
                if(idigit%2==0)
                {
                    isum1 = isum1 + idigit;
                }
                else 
                {
                    isum2 = isum2 + idigit;
                }
            }
        }
        return isum1 - isum2;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int ivalue = 0;
        int iret=0;

        System.out.println("Enter the number");
        ivalue = sobj.nextInt();

        iret = CountDiff(ivalue);
        System.out.println("Difference is  : "+iret);


    }
}