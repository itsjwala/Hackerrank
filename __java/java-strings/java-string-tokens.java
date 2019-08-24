import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        // Write your code here.
        s = s.trim();
        if(s.length() ==0 || s.length()>400000){
            System.out.println(0);
            System.exit(0);
        }
        // s = s.replaceAll("[^a-zA-Z]"," ");
        String arr[] = s.split("[, \\_.@?\'!]+");
        System.out.println(arr.length);
        for(String token : arr)
        System.out.println(token);
        scan.close();
    }
}


