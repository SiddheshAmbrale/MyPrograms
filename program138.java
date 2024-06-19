/* Write a java Program which Accept string from user and return diffrence between Frequency of small Character and frequency of capital characters.

Input : MarvellouS

Output : 6  (8-2)

*/

import java.util.*;

class program138
{
    public static int CountDiff(String str)
    {
        int icnt=0;
        int count1 = 0;
        int count2 = 0;
        char Arr[] = str.toCharArray();

        for(icnt=0;icnt<Arr.length;icnt++)
        {
            if((Arr[icnt]>='A') && (Arr[icnt]<='Z'))
            {
                count1++;
            }
            if((Arr[icnt]>='a') && (Arr[icnt]<='z'))
            {
                count2++;
            }
        }
        return count2 - count1;
        
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;
        int iret = 0;


        System.out.println("Enter the Characters");
        str = sobj.nextLine();

        iret = CountDiff(str);
        System.out.println("Difference is : "+iret);


    }
}