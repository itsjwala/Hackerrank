import java.io.*;
import java.util.*;
import java.util.stream.*;

public class Solution {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        List<List<Integer>> mat = new ArrayList<>();

        int n = sc.nextInt();
        for(int i=0 ; i<n ; i++){

            String s= sc.nextLine();
            if(s.equals(""))
                s = sc.nextLine();

            List<Integer> list = Arrays.stream(s.split(" "))
                .skip(1)
                .map(Integer::parseInt)
                .collect(Collectors.toList());
        
            mat.add(list);
        }

        int queries = sc.nextInt();
        while(queries-->0){
            int i = sc.nextInt();
            int j = sc.nextInt();

            i--;
            j--;
            if(i<mat.size() && j<mat.get(i).size()){
                System.out.println(mat.get(i).get(j));
            }
            else{
                System.out.println("ERROR!");
            }
        }

    }
}


