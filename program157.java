// Write a program whick checks whether 5th  &  18th bit is On or OFF.

import java.util.*;

class program157
{
    public static boolean ChkBit(int ino)
    {
        int imask=0x00000090;
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

        System.out.println("Enter the number");
        ino = sobj.nextInt();

        bret = ChkBit(ino);
        if(bret==true)
        {
            System.out.println("5th & 18th bit is On.");
        }
        else
        {
            System.out.println("5th & 18th bit is OFF.");
        }


    }
}