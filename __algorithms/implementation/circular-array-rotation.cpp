#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef unsigned int ui;
using namespace std;
int main() 
{    ios::sync_with_stdio(false);
     ui n,k,q,m;
     cin>>n>>k>>q;
    ui a[n];
 for(ui i=0;i<n;i++)
      cin>>a[i];
 while(k>n)
     k%=n;
 while(q--)
   {    cin>>m;
      cout<<a[(n-k+m)%n]<<endl;
  }
   return 0;
}

