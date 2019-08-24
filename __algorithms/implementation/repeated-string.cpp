#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {

    long count = 0L;

    for(char ch : s)
        if(ch == 'a')
            count++;

    count = count * (n/s.size());
    int leftover;
    if(n > s.size())
        leftover = n%s.size();
    else
        leftover = n;
    for(int i=0 ; i< leftover ; i++)
        if(s[i] == 'a')
            count++;
            
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}

