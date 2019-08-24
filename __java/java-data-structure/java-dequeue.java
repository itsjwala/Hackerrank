
import java.util.ArrayDeque;

import java.util.Deque;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Deque deque = new ArrayDeque<>();
        int n = in.nextInt();
        int m = in.nextInt();
        Map<Integer, Integer> mp = new HashMap<>();

        Deque<Integer> dq = new ArrayDeque();
        int ans = -1;
        for (int i = 0; i < m; i++) {
            int num = in.nextInt();
            dq.push(num);
            if (!mp.containsKey(num))
                mp.put(num, 1);
            else
                mp.put(num, mp.get(num) + 1);

        }
        ans = Math.max(ans, mp.size());

//        System.out.println(mp);
        for (int i = m; i < n; i++) {

            int num = dq.poll();

            if (mp.containsKey(num)) {
                int count = mp.get(num);
                if (count == 1)
                    mp.remove(num);
                else
                    mp.put(num, count - 1);
            }

            num = in.nextInt();

            dq.add(num);
            assert(dq.size() ==m);
            if (!mp.containsKey(num))
                mp.put(num, 1);
            else
                mp.put(num, mp.get(num) + 1);

            ans = Math.max(ans, mp.size());

        }
        System.out.println(ans);
    }
}

