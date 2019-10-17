import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        List<Integer> list = new ArrayList<>();


        for(int i=0 ; i<n ; i++){
            list.add(sc.nextInt());
        }

        int q = sc.nextInt();
        while(q-->0){

            String cmd = sc.next();
            int idx = sc.nextInt();
            if(cmd.equals("Insert")){

                int num = sc.nextInt();
                list.add(idx,num);
            }
            else{
                list.remove(idx);
            }

        }

        list.forEach(num->{
            System.out.print(num+" ");
        });


        sc.close();


    }
}


