import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
	Scanner in = new Scanner(System.in);
	int numCases = in.nextInt();
	while(numCases > 0){
	    String word = in.next();
	    char[] charArray = word.toCharArray();
	    String evenString = "";
	    String oddString = "";
	    //System.out.println(evenString);
	    for(int i=0; i < word.length(); i++){
		if( i % 2 == 0){
		    evenString += charArray[i];
		}else{
		    oddString += charArray[i];
		}
	    }
	    System.out.println(evenString + " " + oddString );
				  
	    numCases--;
	}
    }
}
/*Better solution for me in my case, the my problem
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int testCases = scan.nextInt();
        for(int i = 0; i < testCases; i++){
            char[] inputString = scan.next().toCharArray();
            StringBuilder oddString = new StringBuilder();
            StringBuilder evenString = new StringBuilder();
	    
            for(int j = 0; j < inputString.length; j++) {
                if( (j & 1) == 0) {
                    evenString.append(inputString[j]);
                }
                else {
                    oddString.append(inputString[j]);
                }
            }
            
            System.out.println(evenString + " " + oddString);
        }
        scan.close();
    }
}

*/

/*Other solution that better memoria size is:
Don't create more variable just print String

import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int testCases = scan.nextInt();
        for(int i = 0; i < testCases; i++){
            char[] inputString = scan.next().toCharArray();
	    
            // Print even chars
            for(int j = 0; j < inputString.length; j += 2){
                System.out.print(inputString[j]);
            }
            System.out.print(" ");
            
            // Print odd chars
            for(int j = 1; j < inputString.length; j += 2){
                System.out.print(inputString[j]);
            }
            System.out.println();
        }
        scan.close();
    }
}

*/
