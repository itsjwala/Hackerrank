#include <iostream>
#include<map>
typedef unsigned int ui;
using namespace std;
int main() 
{    ios::sync_with_stdio(false);
     ui n,q;  string temp;
 map<string,ui> m;
 map<string,ui>::iterator mit;
    cin>>n;
     while(n--)
      {   cin>>temp;
          m[temp]++;  
      }
       cin>>q;
   while(q--)
    {   cin>>temp; 
         if((mit=m.find(temp))!=m.end())
            cout<<mit->second<<endl;
          else
                cout<<0<<endl;
   }
    return 0;
}

