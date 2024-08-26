/* Write a program which accept number from user and count frequence of such a digit which are less then 6 ?

Input : 1278
Output : 2

Input : 456738
Output : 3

*/

import java.util.*;

class Less
{
    public int iNo;

    public Less(int i)
    {
        iNo = i;
    }

    public int Count()
    {
        int icnt = 0;
        int idigit = 0;

        while(iNo!=0)
        {
            idigit = iNo % 10;
            iNo = iNo / 10;

            if(idigit<6)
            {
                icnt++;
            }
        }
        return icnt;
    }
}


class CountLess
{
    public static void main(String[] args)
    {
        int ino = 0;
        int iret = 0;

        Scanner obj = new Scanner(System.in);
        System.out.println("Enter the Digit : ");
        ino = obj.nextInt();

        Less L = new Less(ino);

        iret = L.Count();

        System.out.println(+iret);

    }
}