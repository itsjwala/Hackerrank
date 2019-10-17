import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();

            int prev = a;
            int twos = 1;

            while(n-->0){
                int cur = prev + twos*b;
                System.out.print(cur+" ");
                twos*=2;
                prev = cur;
            }
            System.out.println();
        }
        in.close();
    }
}


