

    static boolean isAnagram(String a, String b) {
        if(a.length()!=b.length())
            return false;

        int ma[] = new int[26];
        int mb[] = new int[26];

        a = a.toLowerCase();
        b = b.toLowerCase();

        for(int i=0 ; i<a.length() ; i++){
            ma[a.charAt(i)-'a']++;
            mb[b.charAt(i)-'a']++;
        }

        for(int i=0 ; i<26 ; i++)
            if(ma[i]!=mb[i])
                return false;
        
        return true;
        
    }


