#include <bits/stdc++.h>
#define FASTIO ios::sync_with_stdio(0),cin.tie(0)
using namespace std;


int main(){
    FASTIO;
    int n;
    cin>>n;

    // map<int,int> mp;
    set<int> mp;

    int temp;

    for(int i=0 ; i<n ; i++){
        cin>>temp;
        // mp[temp]++;
        mp.insert(temp);
    } 

    vector<int> rank;
    // rank.push_back(0);

    // long long presum[mp.size()+1];
    // presum[0] = 0;
    // int idx=1;
    for(auto it = mp.rbegin() ; it!=mp.rend() ; it++){
        rank.push_back(*it);
        // presum[idx] = presum[idx-1] + it->second;
        // idx++;
    }

    // for(int i=0 ; )
    
    int m ;
    cin>>m;
    while(m--){
        cin>>temp;

        int idx = lower_bound(rank.begin(),rank.end(), temp, greater<int>()) - rank.begin();

        cout<<idx+1<<endl;

        // if(idx<rank.size() && rank[idx] == temp)
        //     cout<<
        // if(idx == rank.size())
        //     cout<<idx+1;
        // else if()
        // if(idx == 0)
        //     cout<<1<<endl;
        // else
        //     cout<<presum[idx]<<endl;
    }



}

