import java.util.*;
class Solution{
	
	public static void main(String []argh)
	{
		Scanner sc = new Scanner(System.in);
		
		while (sc.hasNext()) {
			String input=sc.next();
            Stack<Character> st = new Stack<>();
            boolean flag = true;
            for(char c : input.toCharArray()){
                if(c=='(' || c =='{' || c == '[')
                    st.push(c);
                else if (!st.empty() &&( (c ==')' && st.peek() =='(') ||(c =='}' && st.peek() =='{') ||(c ==']' && st.peek() =='[')))
                    st.pop();
                else{
                    flag = false;
                    break;
                }

            }
            if(st.size() >0)
                flag =false;          

                System.out.println(flag);
            


		}
		
	}
}




