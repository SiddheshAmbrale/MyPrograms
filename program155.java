/* Write java program which accept N number from user and return product of all odd elements

Input : N : 6

        Elements  : 15  66  3   70  10  88

Output : 45

*/
import java.util.*;

class program155
{
    public static int Product(int Arr[]) 
    {
        int icnt=0;
        int ians=1;

        for(icnt=0;icnt<Arr.length;icnt++)
        {
            if(Arr[icnt]%2!=0)
            {
                ians = ians * Arr[icnt];
            }
        }


        return ians;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int ivalue = 0;
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

        iret = Product(Arr);
        System.out.println("Product is : "+iret);
    }
}