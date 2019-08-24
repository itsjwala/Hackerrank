#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
string s;
    cin>>s;
   int n=s.size();
   if(s.substr(n-2)=="PM")
    {  if(s[0]=='1'&&s[1]=='2'){
        cout<<"12:"<<s.substr(3,n-5);
        return 0;
       }
       int carry=(s[1]-'0'+2)/10;
        s[1]=((s[1]-'0'+2)%10)+'0';
        s[0]=(s[0]+carry+1);
        
    }
    else if(s[0]=='1'&&s[1]=='2'){
        cout<<"00:"<<s.substr(3,n-5);
        return 0;
    }
   
    cout<<s.substr(0,n-2);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

