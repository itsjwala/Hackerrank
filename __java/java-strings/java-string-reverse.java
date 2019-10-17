import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String A=sc.next();
        /* Enter your code here. Print output to STDOUT. */
        int n = A.length();
        boolean not = false;

        for(int i=0,j =n-1 ; i<j ; i++,j--){
            if(A.charAt(i) != A.charAt(j)){
                not = true;
                break;
            }
        }

        if(!not)
            System.out.println("Yes");
        else
            System.out.println("No");
    }
}




