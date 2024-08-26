/* Write a program which Accept input from user and check its Factorial ?

Input : 5
Output : 120

 */

import java.util.*;

class Factorial
{
    public static void main(String[] args)
    {
         int i=0;
         int fact=1;
         int n=0;

        Scanner obj = new Scanner(System.in);
        System.out.println("Enter the Number");
        n=obj.nextInt();

        for(i=1;i<=n;i++)
        {
            fact=fact*i;
        }
         System.out.println("Factorial is:" +fact);

    }
}