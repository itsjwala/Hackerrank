#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int max(int a,int b){
    if(a>b)
        return a;
    return b;
}

int main() {
    int n;
    cin>>n;
    int a[n];
    int maxi=-1e9;
    for(int i=0;i<n;i++){
        cin>>a[i];
        maxi=max(maxi,a[i]);
    }
    int c=0;
    for(int i=0;i<n;i++)
        if(a[i]==maxi)
            c++;
    cout<<c;
    return 0;
}

