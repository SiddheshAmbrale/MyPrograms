import java.net.*;
import java.io.*;

class Program1
{
    public static void main(String Args[]) throws Exception
    {
        System.out.println("Server Application is running..");
        ServerSocket ssobj = new ServerSocket(2100);
        System.out.println("Server is Waiting..");
        Socket sobj = ssobj.accept();
        System.out.println("Client get connected");

        PrintStream ps = new PrintStream(sobj.getOutputStream());
        BufferedReader br1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));

        String str1,str2;

        while((str1=br1.readLine())!=null)
        {
            System.out.println("Shardul : "+str1);
            System.out.println("Enter Message: ");
            str2=br2.readLine();
            ps.println(str2);
        }

    }
}