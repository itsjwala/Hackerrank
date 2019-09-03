#include <bits/stdc++.h>
using namespace std;

#define N 100005

int parent[N + 5], ranki[N + 5];
int n;

void init(int n) {
    //initially all are members of group that contains themselves only (therefore 1)
    // memset(ranki, 1, n+1);
    for(int i=1 ; i<=n ; i++)
        ranki[i] = 1;

    //iniitially all are parent of themselves
    for (int i = 0; i <= n; i++)
        parent[i] = i;

}
//find parent of 'n' upto the root
int find(int u) {
    queue<int> q;

    q.push(u);  //queue for 'u' and all its parent for path compression
    while (u != parent[u]) {
        u = parent[u];
        q.push(u);
    }
    while (!q.empty()) {
        parent[q.front()] = u;   //assign root as parent of all ancestors of 'u'
        q.pop();
    }

    return u;
}
void merge(int x, int y) {
    int _x = find(x);   //traverse upwards and find root of x;
    int _y = find(y);   //same with y

    //if dont belong to same union merge
    if (_x != _y) {

        if (ranki[_x] > ranki[_y]) {
            parent[_y] = _x;
            ranki[_x]+=ranki[_y];
        } else {
            parent[_x] = _y;
            ranki[_y]+=ranki[_x];
        }

    }

}
int main() {
    int q;

    cin>>n>>q;

    init(n);
    char ch;
    int u,v;

    while(q--){
        cin>>ch;
        if(ch == 'M'){
            cin>>u>>v;
            merge(u,v);   
        }
        else{
            cin>>u;
            int root = find(u);
            cout<<ranki[root]<<endl;
        }
        // for(int i=1 ; i<=n ; i++)
        //     cout<<ranki[i]<<" ";
        // cout<<endl;

    }


// 3 6
// Q 1
// M 1 2
// Q 2
// M 2 3
// Q 3
// Q 2

    return 0;
}

