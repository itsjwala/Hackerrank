#include<iostream>
#include<vector>
typedef unsigned int ui;
using namespace std;
int main() 
{   ios::sync_with_stdio(false);
    ui n,q,type,x,y,index,lastans=0;
   cin>>n>>q;
    vector<ui> v[n];
     while(q--)
     {    cin>>type>>x>>y;
           index=(x^lastans)%n;   
           if(type==1)
             v[index].push_back(y);
         
         else  
             {  lastans=v[index][y%v[index].size()];
             cout<<lastans<<endl;}
     }
    return 0;
}

