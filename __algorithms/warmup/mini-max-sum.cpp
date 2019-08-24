#include<iostream>
#define ll long long
using namespace std;

ll max(ll &a,ll &b){
    if(a>b)
        return a;
    return b;
}
ll min(ll &a,ll &b){
    if(a<b)
        return a;
    return b;
}
int main() {
    ll a[5],sum=0LL;
   for(int i=0;i<5;i++)
   {    cin>>a[i];
       sum+=a[i];
   }
    ll mini=1e18;
    ll maxi=-1e18;
 for(int i=0;i<5;i++){
     
     mini=min(mini,sum-a[i]);
     maxi=max(maxi,sum-a[i]);
     
 } 
    cout<<mini<<" "<<maxi;
    return 0;
}

