/* Write a program which accept one number from user and on its first 4 bits. Return modified number.

Input : 73

Output : 79

*/

import java.util.*;

class program165
{
    public static int OnBit(int ino)
    {
        int imask = 0x0000000f;
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

        iret = OnBit(ino);

        System.out.println("Updated bit is : "+iret);

    }
}