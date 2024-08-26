// To find Volume of Cylinder 

import java.util.*;

class Cylinder1
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int r,R;
        int h=0;
        int volume=0;

        System.out.println("Enter Radius : ");
        r = sobj.nextInt();

        System.out.println("Enter Height : ");
        h = sobj.nextInt();

        R=r*r;
        volume = 22/7 * R * h;
        System.out.println("Volume of Cylinder is : "+volume);

    }
}