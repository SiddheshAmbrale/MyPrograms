import java.util.*;

class Insertion 
{
    public void InsertionS(int Brr[],int n)
    {
        int key,i,j;
        for(i=1;i<n;i++)
        {
            key=Brr[i];
            for(j=i-1;j>=0 && key<=Brr[j];j--)
            {
                if(key<Brr[j])
                {
                    Brr[j+1]=Brr[j];
                }
                
            }
            Brr[j+1]=key;
        }
    }
}

class InsertionSort
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

        Insertion I = new Insertion();
        I.InsertionS(Arr,ino);

        System.out.println("Array Elements are : "+" ");
        for(int i=0;i<ino;i++)
        {
            System.out.print(" "+Arr[i]);
        }
        System.out.println();
    }
}