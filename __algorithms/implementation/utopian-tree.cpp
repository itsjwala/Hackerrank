#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
typedef unsigned int ui;
using namespace std;
int main() 
{   ios::sync_with_stdio(false);
    ui t,n,res;
   cin>>t;
     while(t--)
     {   res=1;
         cin>>n;
          for(ui i=1;i<=n;i++)
           {   if(i&1)
               {
                  res+=res;
               }
              else
              {  
                  res+=1;
              }
           }
         cout<<res<<endl;
     }
    
    return 0;
}

