import java.util.*;

public class EjemploScanner{

    public static void main(String argv[]){

	Scanner in = new Scanner(System.in);
	String token;
	while(in.hasNext()){
	    token = in.next();
	    System.out.println(token);
	}
	in.close();
    }
}
