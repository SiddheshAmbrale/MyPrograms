// Multiplication of Matrix

class MatrixMulti
{
    public static void main(String args[])
    {
        int Arr[][] = {{1,2},{2,4}};
        int Brr[][] = {{5,2},{6,1}};

        int Crr[][] = new int[2][2];

        int i,j,k;

        for(i=0;i<2;i++)
        {
            for(j=0;j<2;j++)
            {
                Crr[i][j]=0;

                for(k=0;k<2;k++)
                {
                    Crr[i][j] = Arr[i][k] * Brr[j][k];
                }
                System.out.print(" "+Crr[i][j]);
            }
            System.out.println();
        }
    }
}