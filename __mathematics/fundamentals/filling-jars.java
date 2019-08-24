import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.util.StringTokenizer;
 
 public class Solution {
	public static void main(String args[]) throws IOException {
		FastScanner sc = new FastScanner(System.in);
		long n=sc.nextInt();
		int q=sc.nextInt();
		double avg=0.0;
		while(q-- > 0){
		  long a,b,val;
		  a=sc.nextLong();
		  b=sc.nextLong();
		  val=sc.nextLong();
		  avg+=(b-a+1)*val;
		}
		System.out.println((long)(avg/n));
        
    sc.close();
	}
 
	static class FastScanner {
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
