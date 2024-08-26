// Write a program which accept Two Dimensional array from user and display its Addition ?

import java.util.*;

class AddArray
{
    public static void main(String Args[])
    {
        Scanner obj = new Scanner(System.in);

        int size = 0;
        System.out.println("Enter how much elements do you want : ");
        size = obj.nextInt();

        int Arr[][] = new int[3][3];
        int Brr[][] = new int[3][3];
        int Crr[][] = new int[size][size];

        int icnt=0;
        int jcnt=0;

        System.out.println("Enter first Matrix : ");
        for(icnt=0;icnt<3;icnt++)
        {
            for(jcnt=0;jcnt<3;jcnt++)
            {
                Arr[icnt][jcnt] = obj.nextInt();
            }
        }

        System.out.println("Enter second Matrix : ");
        for(icnt=0;icnt<3;icnt++)
        {
            for(jcnt=0;jcnt<3;jcnt++)
            {
                Brr[icnt][jcnt] = obj.nextInt();
            }
            
        }

        System.out.println("First matrix is : ");
        for(icnt=0;icnt<3;icnt++)
        {
            for(jcnt=0;jcnt<3;jcnt++)
            {
                System.out.print(" "+Arr[icnt][jcnt]);
            }
            System.out.println();
        }

        System.out.println("Second matrix is : ");
        for(icnt=0;icnt<3;icnt++)
        {
            for(jcnt=0;jcnt<3;jcnt++)
            {
                System.out.print(" "+Brr[icnt][jcnt]);
            }
            System.out.println();
        }

        System.out.println("Addition of Array : ");
        
        for(icnt=0;icnt<3;icnt++)
        {
            for(jcnt=0;jcnt<3;jcnt++)
            {
                Crr[icnt][jcnt] = Arr[icnt][jcnt] + Brr[icnt][jcnt];
                System.out.print(" "+Crr[icnt][jcnt]);
            }
            System.out.println();
        }
        

    }
}