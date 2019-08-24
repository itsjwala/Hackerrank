import java.util.*;

public class Solution {


    static boolean isPossible(int[] game,int cur,int leap,boolean visited[]){
        
        
        if(cur<0)
            return false;
        
        if(cur>=game.length)
            return true;
        if(visited[cur])
            return false;
        visited[cur] = true;
        
        if(game[cur] == 0){
            if(isPossible(game,cur-1,leap,visited))
                return true;
            else if (isPossible(game,cur+1,leap,visited))
                return true;
            else if(isPossible(game,cur+leap,leap,visited))
                return true; 
            else
                return false;
        }

        return false;
    
    }
    public static boolean canWin(int leap, int[] game) {
        boolean visited[] = new boolean[game.length];
        return isPossible(game,0,leap,visited);

    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int q = scan.nextInt();
        while (q-- > 0) {
            int n = scan.nextInt();
            int leap = scan.nextInt();
            
            int[] game = new int[n];
            for (int i = 0; i < n; i++) {
                game[i] = scan.nextInt();
            }

            System.out.println( (canWin(leap, game)) ? "YES" : "NO" );
        }
        scan.close();
    }
}


