/* Write java program which accept N numbers from user and display all such elements which are and divisible by 3 and 5.

Input: 6
 
    Elements : 85   66  3   15  93  88

Output :  15

*/

import java.util.*;

class program144
{
    public static void Display(int Brr[])
    {
        int icnt=0;

        for(icnt=0;icnt<Brr.length;icnt++)
        {
            if(Brr[icnt]%5==0 && Brr[icnt]%3==0)
            {
                System.out.print(Brr[icnt]+"\t");
                icnt++;
            }
        }
    }

    public static void main(String Arg[])
    {
        Scanner sobj  = new Scanner(System.in);
        
        int ino = 0;
        int icnt=0;

        System.out.println("Enter how many elements do you want");
        ino = sobj.nextInt();

        int Arr[] = new int[ino];

        System.out.println("Enter elements");
        for(icnt=0;icnt<ino;icnt++)
        {
            Arr[icnt] = sobj.nextInt();
        }

        System.out.println("Elements of an Array");
        for(icnt=0;icnt<ino;icnt++)
        {
            System.out.print(Arr[icnt]+"\t");
        }
        System.out.println();

        Display(Arr);





        
    }

}