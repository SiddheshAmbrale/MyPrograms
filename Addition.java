/* Write a program which accepts Two input from user and perform its addition ?

Input : 10  11
Output : 21

Input : 11  15
Output : 26

*/

import java.util.*;

class Add
{
    public int iNo1;
    public int iNo2;

    public Add(int A,int B)
    {
        iNo1 = A;
        iNo2 = B;
    }

    public int AdditionDisplay()
    {
        int Ans = 0;
        Ans = iNo1 + iNo2;
        return Ans;
    }
}

class Addition
{
    public static void main(String[] args)
    {
        int ino1 = 0;
        int ino2 = 0;
        int iret = 0;

        Scanner obj = new Scanner(System.in);
        System.out.println("Enter First Number : ");
        ino1 = obj.nextInt();
        System.out.println("Enter Second number : ");
        ino2 = obj.nextInt();

        Add A = new Add(ino1,ino2);

        iret = A.AdditionDisplay();

        System.out.println("Addition is : "+iret);

    }
}