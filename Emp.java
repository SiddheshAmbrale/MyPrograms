import java.util.*;

class Employee
{
    int id;
    String name,deptname;
    float salary;

    static int cnt=0;

    public Employee()
    {
        this.id=0;
        this.name=null;
        this.deptname=null;
        this.salary=0;
    }

    public Employee(int ID,String NAME,String DEPT,float SALARY)
    {
        this.id=ID;
        this.name=NAME;
        this.deptname=DEPT;
        this.salary=SALARY;
    }

    public void Display()
    {
        System.out.print("\t"+id+"\t"+name+"\t"+deptname+"\t"+salary+"\t");
    }

    static void Count()
    {
        System.out.println(cnt+" Object is created");
        cnt++;
    }
}

class Emp
{
    public static void main(String Args[])
    {
        Scanner obj = new Scanner(System.in);
        int n=0;

        System.out.println("Enter no of Employee : ");
        n=obj.nextInt();

        Employee E[] = new Employee[n];
        for(int i=0;i<n;i++)
        {
            System.out.println("Enter ID : ");
            int id=obj.nextInt();

            System.out.println("Enter Name : ");
            String name=obj.next();

            System.out.println("Enter name of Department : ");
            String dept=obj.next();

            System.out.println("Enter Salary : ");
            float salary = obj.nextFloat();

            E[i]=new Employee(id,name,dept,salary);
            E[i].Count();
        }

        for(int i=0;i<n;i++)
        {
            E[i].Display();
        }

    }
}