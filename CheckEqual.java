/* Write a program which accept Two inputs and check whether both are equal or not ?

Input : 20-20
Output : Equal

Input : 15-21
Output : Not Equal

*/
import java.util.*;

class Equal
{
    public int iNo1;
    public int iNo2;

    public Equal(int i,int j)
    {
        iNo1 = i;
        iNo2 = j;
    }

    public void Display()
    {
        if(iNo1==iNo2)
        {
            System.out.println("NUmbers are Equal.");
        }
        else
        {
            System.out.println("Numbers are Not Equal.");
        }
    }
}

class CheckEqual
{
    public static void main(String[] args)
    {
        int ino1=0;
        int ino2=0;

        Scanner obj = new Scanner(System.in);
        System.out.println("Enter First Number : ");
        ino1 = obj.nextInt();
        System.out.println("Enter second Number : ");
        ino2 = obj.nextInt();

        Equal E = new Equal(ino1,ino2);

        E.Display();

    }
}