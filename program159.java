// Write a program which checks whether 7th & 8th & 9th bit is ON or OFF.

import java.util.*;

class program159
{
    public static boolean ChkBit(int ino);
    {
        int imask = 0x000001c0;
        int result=0;

        result = ino & imask;

        if(result==imask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int ino = 0;
        boolean bret = false;

        System.out.println("Enter the Number : ");
        ino = sobj.nextInt();

        bret = ChkBit(ino);
        if(bret==true)
        {
            System.out.println("Bits are ON");
        }
        else
        {
            System.out.println("Bits are OFF");
        }


    }
}