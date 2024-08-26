import java.net.*;
import java.io.*;

class Program2
{
    public static void main(String Args[]) throws Exception
    {
        System.out.println("Client Application is Running");
        Socket sobj = new Socket("localhost",2100);
        System.out.println("Server gets connected");

        PrintStream ps = new PrintStream(sobj.getOutputStream());
        BufferedReader br1 =new BufferedReader(new InputStreamReader(sobj.getInputStream()));
        BufferedReader br2 = new BufferedReader(new InputStreamReader(System.in));

        String str1,str2;

        while(!(str1=br2.readLine()).equals("ends"))
        {
            ps.println(str1);
            str2=br1.readLine();
            System.out.println("Enter Message: ");
            System.out.println("Sanskar : "+str1);
        }
    }
}