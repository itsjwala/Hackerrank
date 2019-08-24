#include<iostream>
typedef unsigned int ui;
using namespace std;
int main() 
{   ios::sync_with_stdio(false);
     ui n,d,c=0;
   cin>>n>>d;
     ui  a[n];
     for(ui i=0;i<n;i++)
          cin>>a[i];
    for(ui i=d%n;++c<=n;i=(i+1)%n)
           cout<<a[i]<<" ";
    return 0;
}

