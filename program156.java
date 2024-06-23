// Write a program which checks whether 15th bit is ON or OFF.

import java.util.*;


class program156
{
    public static boolean ChkBit( int ino)
    {
        int imask = 0x00004000;
        int iresult = 0;

        iresult = ino & imask;

        if(iresult==imask)
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
            System.out.println("15th bit is ON.");
        }
        else
        {
            System.out.println("15th bit is OFF.");
        }




    }
}
