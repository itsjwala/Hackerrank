import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    public static void main(String args[]) throws Exception{
        // 5 3
        // 1 2 100
        // 2 5 100
        // 3 4 100
        FastScanner sc = new FastScanner(System.in);

        int n = sc.nextInt();
        int q = sc.nextInt();

        long arr[] = new long[n+1];

        int a,b;
        long k;

        while(q-- > 0){
            a = sc.nextInt();
            b = sc.nextInt();
            k = sc.nextLong();

            arr[a]+=k;
            if(b+1<=n)
                arr[b+1]-=k;
        }

        long max = arr[1];

        for(int i=2 ; i<=n ; i++){
            arr[i]+=arr[i-1];
            max = Math.max(arr[i],max);
        }

        System.out.println(max);



    }

    @SuppressWarnings("unused")
    private static class FastScanner {
        BufferedReader br;
        StringTokenizer st;

        public FastScanner(InputStream i) {
            br = new BufferedReader(new InputStreamReader(i));
            st = new StringTokenizer("");
        }

        public String next() throws IOException {
            if (st.hasMoreTokens())
                return st.nextToken();
            else
                st = new StringTokenizer(br.readLine());
            return next();
        }

        public int nextInt() throws IOException {
            return Integer.parseInt(next());
        }

        public long nextLong() throws IOException {
            return Long.parseLong(next());
        }

        public double nextDouble() throws IOException {
            return Double.parseDouble(next());
        }

        public void close() throws IOException {
            br.close();
        }
    }
}

