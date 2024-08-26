
class MatrixMulti1
{
    public static void main(String Args[])
    {
        int r1 = 2;
        int c1 = 2;
        int c2 = 2;
        int r2 = 2;

        int A[][] = {{1,2},{3,4}};
        int B[][] = {{1,1},{1,2}};

        int C[][] = new int[2][2];

        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c2;j++)
            {
                C[i][j]=0;
                for(int k=0;k<c1;k++)
                {
                    C[i][j] = A[i][k] * B[k][j];
                }
                System.out.print(" "+C[i][j]);
            }
            System.out.println();
        }
    }
}