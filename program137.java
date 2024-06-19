/* Write a java program which accept string from user and count number of Small characters;

Iput : Marvellous 

Output : 9


*/

import java.util.*;

class program137
{
    public static int SmallCount(String str)
    {
        int icnt=0;
        int count = 0;
        char Arr[] = str.toCharArray();

        for(icnt=0;icnt<Arr.length;icnt++)
        {
            if(Arr[icnt]>='a' && Arr[icnt]<='z')
            {
                count++;
            }

        }
        return count;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        String str = null;
        int iret = 0;


        System.out.println("Enter your name");
        str = sobj.nextLine();

        iret = SmallCount(str);
        System.out.println("Count of small characters is : "+iret);

    }
}