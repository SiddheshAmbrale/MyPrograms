// Write a program to accept elements and display in reverse order.

import java.util.*;

class ReverseArray
{
    public static void main(String Args[])
    {
        Scanner obj = new Scanner(System.in);
        int ino=0;

        System.out.println("Enter how many elements do you want : ");
        ino = obj.nextInt();

        int Arr[] = new int[ino];

        int i=0;

        System.out.println("Enter Elements : ");
        for(i=0;i<ino;i++)
        {
            Arr[i]=obj.nextInt();
        }

        System.out.println("Elements of an Array in Reverse order : ");
        for(i=ino-1;i>=0;i--)
        {
            System.out.print(" "+Arr[i]);
        }
        System.out.println();
    }
}