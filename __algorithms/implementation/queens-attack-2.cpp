#include <bits/stdc++.h>


using namespace std;
struct pair_hash
{
    // template <class T1, class T2>
    std::size_t operator () (std::pair<int, int> const &pair) const
    {
        // std::size_t h1 = std::hash<int>()(pair.first);
        // std::size_t h2 = std::hash<int>()(pair.second);

        // return h1 ^ h2;
        return 31*pair.first + pair.second;
    }
};


vector<string> split_string(string);

bool inbound(int x,int y, int n){
    return x>=1 && y>=1 && x<=n && y<=n;
}
// Complete the queensAttack function below.
int queensAttack(int n, int k, int r_q, int c_q, unordered_set<pair<int,int>,pair_hash> & obstacles) {
    int dx[] = {-1,0,1,1,1,0,-1,-1};
    int dy[] = {1,1,1,0,-1,-1,-1,0};


    int count = 0;

    for(int i=0 ; i<8 ; i++){

        int x = r_q;
        int y = c_q;

        while(inbound(x,y,n) && obstacles.find({x,y}) == obstacles.end()){
            cout<<x<<" "<<y<<endl;
            count++;
            x = x + dx[i];
            y = y + dy[i];
        }

    }

    return count-8;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string r_qC_q_temp;
    getline(cin, r_qC_q_temp);

    vector<string> r_qC_q = split_string(r_qC_q_temp);

    int r_q = stoi(r_qC_q[0]);

    int c_q = stoi(r_qC_q[1]);

    // vector<vector<int>> obstacles(k);
    // auto hash = [](const pair<int, int>& p){ return p.first * 31 + p.second; };
    unordered_set<pair<int,int>,pair_hash> obstacles;

    
    for (int i = 0; i < k; i++) {
        // obstacles[i].resize(2);
        int u,v;
        cin>>u>>v;
        obstacles.insert({u,v});
        // for (int j = 0; j < 2; j++) {
            // cin >> obstacles[i][j];
        // }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = queensAttack(n, k, r_q, c_q, obstacles);

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

