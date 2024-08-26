import java.util.*;

class Bubble 
{
    public void BubbleS(int Brr[],int n)
    {
        int temp;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(Brr[i]>Brr[j])
                {
                    temp=Brr[i];
                    Brr[i]=Brr[j];
                    Brr[j]=temp;
                }
            }
        }
    }
}

class BubbleSort
{
    public static void main(String Args[])
    {
        Scanner obj = new Scanner(System.in);

        int ino=0;
        System.out.println("Enter How Many Elements : ");
        ino=obj.nextInt();

        int Arr[] = new int[ino];

        System.out.println("Enter Elements : ");
        for(int i=0;i<ino;i++)
        {
            Arr[i]=obj.nextInt();
        }

        Bubble B = new Bubble();
        B.BubbleS(Arr,ino);

        System.out.println("Array Elements are : "+" ");
        for(int i=0;i<ino;i++)
        {
            System.out.print(" "+Arr[i]);
        }
        System.out.println();
    }
}