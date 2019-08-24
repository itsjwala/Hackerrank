import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the formingMagicSquare function below.
    static int calcCost(int [][]s , int [][] magicSquare){
        int cost = 0;
        for(int i=0 ; i<3 ; i++)
           for(int j=0 ; j<3 ; j++)
                cost += Math.abs(s[i][j] - magicSquare[i][j]);
        return cost;
    }
    static void rightMirror(int [][]s){
        for(int i=0 ; i<3 ; i++){
            int temp = s[i][0];
            s[i][0] = s[i][2];
            s[i][2] = temp; 
        }
    }

    static void downMirror(int [][]s){

        for(int j=0 ; j<3 ; j++){
            int temp = s[0][j];
            s[0][j] = s[2][j];
            s[2][j] = temp;
        }

    }
    static int[][] symmetry(int [][]magicSquare){
        int copy[][] = new int[3][3];
        for(int i=0 ; i<3 ; i++)
            for(int j=0 ; j<3 ; j++)
                copy[i][j] = magicSquare[i][j];

        for(int i=0 ; i<3 ; i++)
            for(int j=i ; j<3 ; j++){
                int temp = copy[i][j];
                copy[i][j] = copy[j][i];
                copy[j][i] = temp;

                }
        return copy;

    }

    static int formingMagicSquare(int[][] s) {
        int magicSquare[][]= {{8, 3, 4},{1 ,5, 9},{6 ,7 ,2}};
            
        int minCost = 10000000;

        minCost = Math.min(minCost , calcCost(s,magicSquare));


        int copy[][];
        copy = symmetry(magicSquare);
        minCost = Math.min(minCost , calcCost(s,copy));
        
        
        rightMirror(magicSquare);

        minCost = Math.min(minCost , calcCost(s,magicSquare));
        
        copy = symmetry(magicSquare);
        minCost = Math.min(minCost , calcCost(s,copy));


        downMirror(magicSquare);
        minCost = Math.min(minCost , calcCost(s,magicSquare));


        copy = symmetry(magicSquare);
        
        minCost = Math.min(minCost , calcCost(s,copy));

        rightMirror(magicSquare);
        minCost = Math.min(minCost , calcCost(s,magicSquare));

        
        copy = symmetry(magicSquare);
        minCost = Math.min(minCost , calcCost(s,copy));


        return minCost;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int[][] s = new int[3][3];

        for (int i = 0; i < 3; i++) {
            String[] sRowItems = scanner.nextLine().split(" ");
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for (int j = 0; j < 3; j++) {
                int sItem = Integer.parseInt(sRowItems[j]);
                s[i][j] = sItem;
            }
        }

        int result = formingMagicSquare(s);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}

