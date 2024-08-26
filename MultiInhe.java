// Multi Level Inheritance.

class Base
{
    public int A,B;

    public Base()
    {
        System.out.println("Inside Base Construtor");
    }

    public void fun()
    {
        System.out.println("Inside base fun");
    }
}

class Derived extends Base
{
    public int x,y;

    public Derived()
    {
        System.out.println("Inside Derived Constructor");
    }

    public void gun()
    {
        System.out.println("Inside Derived gun");
    }
}

class DerivedX extends Derived
{
    public int P,Q;

    public DerivedX()
    {
        System.out.println("Inside DerivedX constructor");
    }

    public void sun()
    {
        System.out.println("Inside DerivedX sun");
    }
}

class MultiInhe
{
    public static void main(String Arg[])
    {
        System.out.println("Inside main");

        DerivedX dobj = new DerivedX();
        dobj.fun();
        dobj.gun();
        dobj.sun();

    }
}