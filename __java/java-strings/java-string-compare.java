

    public static String getSmallestAndLargest(String s, int k) {
        String smallest = "";
        String largest = "";
        boolean first = true;

        for(int i=0 ; i<=s.length()-k ; i++){
            String temp = s.substring(i,i+k);
            if(first || temp.compareTo(smallest) < 0){
                smallest = temp;
                first = false;
            }
            if(temp.compareTo(largest) > 0)
                largest = temp;
        }


        return smallest + "\n" + largest;
    }


