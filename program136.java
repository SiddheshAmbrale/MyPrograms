/* Write a java program which accept string from user and count number of capital characters;

Iput : Marvellous Multi OS

Output : 4


*/

import java.util.*;

class program136
{
    public static int CountCapital(String str) 
    {
        int icnt=0;
        int icount = 0;
        char Arr[] = str.toCharArray();

        for(icnt=0;icnt<Arr.length;icnt++)
        {
            if((Arr[icnt]>='A') && (Arr[icnt]<='Z'))
            {
                icount++;
            }
        }
        return icount;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;
        int iret = 0;

        System.out.println("Enter your name : ");
        str = sobj.nextLine();

        iret=CountCapital(str);
        System.out.println("Count of Capital letter is : "+iret);


    }
}
