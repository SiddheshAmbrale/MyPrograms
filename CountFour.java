/* Write a program which accept digit from user and count frequency of 4 in it?

Input : 2495
Output : 1

Input : 44374
Output : 3

Input : 28474
Output : 2

*/

import java.util.*;

class CountD
{
    public int iNo;

    public CountD(int i)
    {
        iNo = i;
    }

    public int Count()
    {
        int icnt=0;
        int idigit = 0;

        while(iNo!=0)
        {
            idigit = iNo%10;
            iNo = iNo/10;

            if(idigit==4)
            {
                icnt++;
            }
        }
        return icnt;
    }
}

class CountFour
{
    public static void main(String[] args)
    {
        int ino = 0;
        int iret = 0;

        Scanner obj = new Scanner(System.in);
        System.out.println("Enter Digit : ");
        ino = obj.nextInt();

        CountD C = new CountD(ino);
        iret = C.Count();

        System.out.println(+iret);

    }
}