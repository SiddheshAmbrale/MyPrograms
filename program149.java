/* Write a java program which accept number from user and return multiplication of all digits.

Input : 2395
Output : 270

Input : 1018
Output : 8

Input : 9440
Output: 144

Input : 922432
Output: 864

*/

import java.util.*;

class program149
{
    public static int Multiply(int ino)
    {
        int idigit = 0;
        int icnt=0;
        int ians=1;

        while(ino!=0)
        {
            

            for(icnt=1;icnt<=ino;icnt++)
            {
                idigit = ino % 10;
                ino = ino / 10;
                ians= ians * idigit;
            }
        }
        return ians;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int ivalue = 0;
        int iret=0;

        System.out.println("Enter the number");
        ivalue = sobj.nextInt();

        iret = Multiply(ivalue);
        System.out.println("Multiplication is : "+iret);


    }
}