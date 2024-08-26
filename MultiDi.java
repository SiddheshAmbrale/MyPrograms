import java.util.*;

class MultiDi
{
    public static void main(String Args[])
    {
        Scanner obj = new Scanner(System.in);
        int ch=0;
        int ino=0;
        int row=0;
        int col=0;

        System.out.println("Enter Rows : ");
        row=obj.nextInt();

        System.out.println("Enter Columns : ");
        col=obj.nextInt();

        int Arr[][] = new int[row][col];
        int Brr[][] = new int[row][col];
        int Crr[][] = new int[row][col];

        System.out.println("Enter Data of first Array : ");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                Arr[i][j] = obj.nextInt();
            }
        }

        System.out.println("Enter Data of Second Array : ");
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                Brr[i][j] = obj.nextInt();
            }
        }

        do
        {
            System.out.print("\n1)Addition\n2)Multiplication\n3)Transpose of any matrix\n4)exit\nEnter your choice\n");
            ch=obj.nextInt();

            switch(ch)
            {
                case 1: System.out.println("Addition is : ");
                        for(int i=0;i<row;i++)
                        {
                            for(int j=0;j<col;j++)
                            {
                                Crr[i][j] = Arr[i][j]+Brr[i][j];
                                System.out.print(" "+Crr[i][j]);
                            }
                            System.out.println();
                        }
                        break;

                case 2: System.out.println("Multiplication is : ");
                        for(int i=0;i<row;i++)
                        {
                            for(int j=0;j<col;j++)
                            {
                                Crr[i][j]=Arr[i][j]*Brr[i][j];
                                System.out.print(" "+Crr[i][j]);
                            }
                            System.out.println();
                        }
                        break;

                case 3: System.out.println("Transpose is : ");
                        for(int i=0;i<row;i++)
                        {
                            for(int j=0;j<col;j++)
                            {
                                System.out.print(" "+Arr[j][i]);
                            }
                            System.out.println();
                        }
                        break;

                case 4: System.out.println("Exit..");
                        break;
                default : System.out.println("Invalid Input");
                        break;


            }
        }while(ch<5);


    }
}