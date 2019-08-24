#include <vector>
#include <iostream>
#define MAX 500
typedef unsigned int ui;
using namespace std;
void factorial(ui n)
{    vector<ui>  res(0);
    res.push_back(1); 
    ui i,j,carry;
     for(i=2;i<=n;i++)
       {    carry=0;
           for(j=0;j<res.size();j++)            
              { res[j]=res[j]*i+carry;
                 carry=res[j]/10;    
                 if(carry)   
                 res[j]%=10;
              }
          while(carry)
          { 
              res.push_back(carry%10);
             carry/=10;  
           }
      }
  for(auto rit=res.rbegin();rit!=res.rend();rit++)
     cout<<*rit;
         
}
int main() 
{  ios::sync_with_stdio(false);
    ui n;
    cin>>n;   
    factorial(n);
    return 0;
}

