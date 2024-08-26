/* Write a program which accept number from user and check it is Prime or not? 

Input : 2
Output : True

Input : 9 
Output : False

Input : 7
Output : True

*/

import java.util.*;

class PrimeNumber
{
    public int iNo;

    public PrimeNumber(int i)
    {
        iNo = i;
    }

    public boolean prime()
    {
        boolean bRet = true;

        for(int i = 2;i <= (iNo/2); i++)
        {
            if(iNo % i == 0)
            {
                bRet = false;
                break;
            }
        }

        return bRet;
    }

    public void DisplayPrime()
    {
        boolean bRet = false;

        for(int i = 2; i <= iNo; i++)
        {
            bRet = true;

            for(int j = 2; j <= (i/2); j++)
            {
                if(i % j == 0)
                {
                    bRet = false;
                }
            }

            if(bRet == true)
            {
                System.out.print(i + " ");
            }
        }
    }

}

class Prime
{
    public static void main(String[] args)
    {
        int i=0;
        Scanner obj = new Scanner(System.in);

        System.out.println("ENter any number : ");
        i = obj.nextInt();

        PrimeNumber p = new PrimeNumber(i);

        // System.out.println(p.prime());
        p.DisplayPrime();

    }
}