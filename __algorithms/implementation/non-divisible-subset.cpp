#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the nonDivisibleSubset function below.
 */
int nonDivisibleSubset(int k, vector<int> S) {
  
    int a[k]={0};
    int ans=0;
    for(int i:S)
        a[i%k]++;
    

    int i,j;
    for(i=1 ,j=k-1 ;i<j ;i++,j--)
        ans+=max(a[i],a[j]);
    
    if(a[0])
        ans++;
    if ( i==j && a[i])
        ans++;
    return ans;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string S_temp_temp;
    getline(cin, S_temp_temp);

    vector<string> S_temp = split_string(S_temp_temp);

    vector<int> S(n);

    for (int S_itr = 0; S_itr < n; S_itr++) {
        int S_item = stoi(S_temp[S_itr]);

        S[S_itr] = S_item;
    }

    int result = nonDivisibleSubset(k, S);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}

