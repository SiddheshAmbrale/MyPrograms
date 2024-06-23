/* Write a program which accept one number from user and toggle 7th and 10th bit of that number. Return modified number.

Input : 137

Output : 713

*/

import java.util.*;

class program164
{
    public static int ToggleBit(int ino)
    {
        int imask = 0x00000240;
        int result=0;

        result = ino ^ imask;

        return result;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int ino=0;
        int iret = 0;

        System.out.println("Enter the number : ");
        ino = sobj.nextInt();

        iret = ToggleBit(ino);

        System.out.println("Updated bit is : "+iret);

    }
}