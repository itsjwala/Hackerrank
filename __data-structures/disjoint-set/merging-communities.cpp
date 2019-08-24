#include<iostream>
#include<set>
typedef unsigned int ui;
using namespace std;
int main() 
{  ios::sync_with_stdio(false);
    char ch; ui n,q,a,b;
    set<ui> s;   
 cin>>n>>q;
   while(q--)
   {   cin>>ch;
       if(ch=='M')
       {   cin>>a>>b;
            s.insert(a);
           s.insert(b);
       }
       else
       {    cin>>a;
           if(s.find(a)!=s.end())             
                      cout<<s.size()<<endl;
            else 
                 cout<<1<<endl;
       } 
   }
    return 0;
}

