
import java.util.*;

class AcceptArr
{
    public int isize;

    public AcceptArr(int S)
    {
        isize = S;
    }

    public void Display(int Brr[])
    {
        int icnt = 0;

        System.out.println("Elements of an array are : ");
        for(icnt=0;icnt<isize;icnt++)
        {
            System.out.print(" "+Brr[icnt]);
        }
        System.out.println();
    }

}

class AcceptArray1
{
    public static void main(String Args[])
    {
        Scanner obj = new Scanner(System.in);

        int size = 0;
        
        int Arr[] = new int[size];
        System.out.println("Enter how many elements do you want : ");
        size = obj.nextInt();

        int icnt = 0;

        System.out.println("Enter Elements : ");
        for(icnt=0;icnt<size;icnt++)
        {
            Arr[icnt] = obj.nextInt();
        }
    
        AcceptArr AA = new AcceptArr(size);
        AA.Display(Arr);

    }
}