/* Write a java program which accept string from user and check whether it contains vowel in it or not.

Input : marvellous

Output: TRUE

Input : XYZ

Output : FALSE;

*/

import java.util.*;

class program139
{
    public static boolean CheckVowel(String str)
    {
        int icnt=0;
        char Arr[] = str.toCharArray();

        if(Arr[icnt]>='A' && Arr[icnt]<='Z' || Arr[icnt]>='a' && Arr[icnt]<='z')
        {
            if(Arr[icnt]=='A' || Arr[icnt]=='E' || Arr[icnt]=='I' || Arr[icnt]=='O' || Arr[icnt]=='U' || Arr[icnt]=='a' || Arr[icnt]=='e' || Arr[icnt]=='i' || Arr[icnt]=='o' || Arr[icnt]=='u')
            {
                return true;
            }
            else 
            {
                return false;
            }
        }
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;
        boolean bret = false;

        System.out.println("Enter characters to check vowels ");
        str = sobj.nextLine();

        bret = CheckVowel(str);
        if(bret==true)
        {
            System.out.println("TRUE");
        }
        else
        {
            System.out.println("FALSE");
        }

    }
}