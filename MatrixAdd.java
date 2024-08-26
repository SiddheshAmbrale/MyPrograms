// Addition of two matrix 

class MatrixAdd
{
    public static void main(String Args[])
    {
        int Arr[][] = {{1,2,3},{4,5,6},{7,8,9}};
        int Brr[][] = {{3,6,8},{2,9,1},{7,4,5}};
        int Crr[][]={{0,0,0},{0,0,0},{0,0,0}};

        int icnt=0;
        int jcnt=0;

        for(icnt=0;icnt<3;icnt++)
        {
            for(jcnt=0;jcnt<3;jcnt++)
            {
                Crr[icnt][jcnt] = Arr[icnt][jcnt] + Brr[icnt][jcnt];
                System.out.print(" "+Crr[icnt][jcnt]);
            }
            System.out.println();
        }
    }
}