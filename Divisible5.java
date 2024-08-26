/* Accept N numbers from user and display all such elements which are divisible by 5 .

Input: 6
       Elements: 85 66  3   80  93  88

Output: 85   80

*/

import java.util.*;

class Divisible5 
{
    public static void main(String Args[])
    {
        Scanner obj = new Scanner(System.in);

        int ino = 0;
        int icnt=0;

        System.out.println("Enter how many elements do you want : ");
        ino = obj.nextInt();

        int Arr[] = new int[ino];

        System.out.println("Enter Elements : ");
        for(icnt=0;icnt<ino;icnt++)
        {
            Arr[icnt] = obj.nextInt();
        }

        Divisible5 dobj = new Divisible5();
        dobj.Display(Arr,ino);


    }

    public static void Display(int Brr[],int ino)
    {
        int icnt=0;

        for(icnt=0;icnt<ino;icnt++)
        {
            if(Brr[icnt]%5==0)
            {
                System.out.print(" "+Brr[icnt]);
            }
        }
    }
}