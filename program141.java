/* Write java program which accept N numbers from user and return Difference between summation of even elements and summation of odd elements ?

Input: 6
 
    Elements : 85   66  3   80  93  88

Output : 53 (234 - 181)

*/

import java.util.*;

class program141
{
    public static int Difference(int Brr[])
    {
        int isum1=0;
        int isum2=0;
        int icnt=0;

        for(icnt=0;icnt<Brr.length;icnt++)
        {
            if(Brr[icnt]%2==0)
            {
                isum1 = isum1 + Brr[icnt];
            }
            else 
            {
                isum2 = isum2 + Brr[icnt];
            }
        }
        return isum1 - isum2;



    }

    public static void main(String Arg[])
    {
        Scanner sobj  = new Scanner(System.in);
        
        int ino = 0;
        int icnt=0;
        int iret = 0;

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

        iret = Difference(Arr);
        System.out.println("Difference is : "+iret);




        
    }

}