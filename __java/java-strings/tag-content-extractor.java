import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution{
	public static void main(String[] args){
		
		Scanner in = new Scanner(System.in);
		int testCases = Integer.parseInt(in.nextLine());
        String pattern = "<(.+)>([^<]+)</\\1>";
        Pattern r = Pattern.compile(pattern);

		while(testCases>0){
			String line = in.nextLine();
			
          	Matcher m = r.matcher(line);
            boolean any = true;
            while(m.find()){
                any = false;
                
                System.out.println(m.group(2));
            }
            if (any)
                System.out.println("None");

			
			testCases--;
		}
	}
}




