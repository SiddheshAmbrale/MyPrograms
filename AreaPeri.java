/* Write a program to calculate perimeter and area of rectangle.*/

import java.util.*;

class AreaPeri
{
    public static void main(String Args[])
    {
        Scanner obj = new Scanner(System.in);

        int length,breadth,area,perimeter;

        System.out.println("Enter Length : ");
        length=obj.nextInt();

        System.out.println("Enter Breadth : ");
        breadth=obj.nextInt();

        area = length * breadth;
        System.out.println("Area of rectangle is : "+area);

        perimeter = 2*(length + breadth);
        System.out.println("Perimeter is : "+perimeter);
    }
}