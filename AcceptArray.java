// write a program to accept the array from user ?

import java.util.*;

class AcceptArray
{
    public static void main(String Args[])
    {
        int icnt = 0;
        int size = 0;

        Scanner obj = new Scanner(System.in);
        System.out.println("Enter how many elements do you want : ");
        size = obj.nextInt();

        int Arr[] = new int[size];

        System.out.println("Enter elements : ");

        for(icnt=0;icnt<size;icnt++)
        {
            Arr[icnt] = obj.nextInt();
        }

        System.out.println("Elements of an array are : ");

        for(icnt=0;icnt<size;icnt++)
        {
            System.out.print(" "+Arr[icnt]);
        }
        System.out.println();

    }
}