/* Write java program which accept N number from user and accept one another number as NO , return index of last occurrence of that NO.

Input : 6
    No :    66
    Elements : 85   66  3   66  93  88

Output : 3

*/

import java.util.*;

class program153
{
    public static int LastOcc(int Arr[],int ino) 
    {
        int icnt=0;

        for(icnt=Arr.length;icnt>=0;icnt--)
        {
            if(Arr[icnt]==ino)
            {
                break;
            }
        }


        return icnt;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int ivalue = 0;
        int NO = 0;
        int icnt=0;
        int iret = 0;

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

        iret = LastOcc(Arr,NO);
        System.out.println("Index of last Occurrence is : "+iret);
    }
}