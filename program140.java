/* Write a java program which accept string from user and display it in reverse order

Input : MarvellouS

Output : SuollevraM

*/

import java.util.*;

class program140
{
    public static void Rervese(String str)
    {
        int icnt = 0;
        char Arr[] = str.toCharArray();

        for(icnt=Arr.length;icnt>=0;icnt--)
        {
            System.out.println(Arr[icnt]);
        }
        
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;



        System.out.println("Enter the Characters");
        str = sobj.nextLine();

        


    }
}