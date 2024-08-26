/* Write a program which accept digit from user and count frequency of 2 in it?

Input : 2395
Output : 1

Input : 1374
Output : 0

Input : 28272
Output : 3

*/

import java.util.*;

class Counttwo
{
    public int iNo;

    public Counttwo(int i)
    {
        iNo = i;
    }

    public int Count()
    {
        int icnt = 0;
        int idigit = 0;

        while(iNo != 0)
        {
            idigit = iNo % 10;
            iNo = iNo / 10;
            if(idigit==2)
            {
                icnt++;
            }
        }
        return icnt;
        
        
    }
}

class CountTwo
{
    public static void main(String[] args)
    {
        int ino = 0;
        int iret = 0;

        Scanner obj = new Scanner(System.in);
        System.out.println("Enter Digits : ");
        ino = obj.nextInt();

        Counttwo C = new Counttwo(ino);
        iret=C.Count();

        System.out.println(+iret);

    }
}