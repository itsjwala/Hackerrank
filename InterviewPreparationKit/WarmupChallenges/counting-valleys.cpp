#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {

    vector<int> abs_delta;
    int cur = 0;
    abs_delta.push_back(cur);

    for(char c: s){
        if(c=='D')
            cur--;
        else if (c=='U')
            cur++;
        abs_delta.push_back(cur);
    }
    int count= 0;
    for(int i=0 ; i< abs_delta.size()-1 ; i++){
        if(abs_delta[i] == 0 && abs_delta[i+1] == -1)
            count++;
    }
    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
