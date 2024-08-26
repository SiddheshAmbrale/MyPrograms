/* Write a program which accept input from user and check it is Greater than 100 or not?

Input : 105
Output : Greater

Input : 54
Output : Smaller


*/ 

import java.util.*;

class Greater
{
    public int iNo;

    public Greater(int i)
    {
        iNo = i;
    }

    public void GreaterDisplay()
    {
        if(iNo>100)
        {
            System.out.println("Greater");
        }
        else if(iNo<100)
        {
            System.out.println("Smaller");
        }
        else
        {
            System.out.println("Equal");
        }

    }

}

class GreaterNumber
{
    public static void main(String[] args)
    {
        int ino=0;
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter Number to Check it is Greater or Not: ");
        ino=obj.nextInt();

        Greater G = new Greater(ino);

        G.GreaterDisplay();

    }
}