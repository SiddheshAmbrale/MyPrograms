import java.io.*;
import java.net.*;

class Client1
{
    public static void main(String Args[]) throws Exception
    {
        System.out.println("Client messenger is runnig : ");
        Socket sobj = new Socket("localhost",2100);

        System.out.println("Server is connected...");

        PrintStream Ps = new PrintStream(sobj.getOutputStream());
        BufferedReader br1 = new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));

        String str1,str2;
        System.out.println("Meseenger start.");

        while((str1=br2.readLine()).equals("ends"))
        {
            Ps.PrintStream(str1);
            str2=br1.readLine();
            System.out.println("Enter message.");
            System.out.println("Server says.");
        }
    }
}