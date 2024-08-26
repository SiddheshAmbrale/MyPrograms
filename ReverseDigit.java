/* Write a program which accept number from user and display its digit in reverse order?

Input : 2395
Output: 5
        9
        3
        2
          
*/
import java.util.*;

class Digit
{
    public int iNo;

    public Digit(int i)
    {
        iNo=i;
    }

    public void ReverseD()
    {
        int iDigit=0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            System.out.println(+iDigit);
            iNo = iNo/10;
        }
    }
}

class ReverseDigit
{
    public static void main(String[] args)
    {
        int ino=0;
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter any Digit : ");
        ino = obj.nextInt();

        Digit D = new Digit(ino);

        D.ReverseD();

    }
}