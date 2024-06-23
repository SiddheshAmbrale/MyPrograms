/* Write java program which accept N number from user and accept one another number as NO ,check whether NO is present or not.

Input : 6
    No :    66
    Elements : 85   66  3   66  93  88

Output : TRUE.

*/

import java.util.*;

class program151
{
    public static boolean Check(int Arr[],int ino)
    {
        int icnt=0;
        for(icnt=0;icnt<Arr.length;icnt++)
        {
            if(Arr[icnt]==ino)
            {
                return true;
            }
            else 
            {
                return false;
            }
        }
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int ivalue = 0;
        int NO = 0;
        int icnt=0;
        boolean bret = false;

        System.out.println("Enter how many elements do you want");
        ivalue = sobj.nextInt();

        int Arr[] = new int[ivalue];

        System.out.println("Enter elements");
        for(icnt=0;icnt<ivalue;icnt++)
        {
            Arr[icnt] = sobj.nextInt();
        }

        System.out.println("Elements of an array");
        for(icnt=0;icnt<ivalue;icnt++)
        {
            System.out.print(Arr[icnt]+"\t");
        }
        System.out.println();

        System.out.println("Enter number to check");
        NO = sobj.nextInt();

        bret = Check(Arr,NO);
        if(bret==true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }


    }
}