#include<iostream>
#include<cstdio>
#include<climits>
using namespace std;
int main(){
    int a[6][6]={0};
    for(int i=0;i<6;i++)
         for(int j=0;j<6;j++)
             cin>>a[i][j];  
        int sum; int max=-INT_MAX;
    for(int i=0;i<4;i++)
     {    
          for(int j=0,k;j<4;j++)
         {      sum=0;
              for(k=0;k<3;k++)
                   sum=sum+a[i][j+k]+a[i+2][j+k];
               sum+=a[i+1][j+k-2];
               
              if(sum>max)
                   max=sum;
              
          }
    }
        cout<<max;
    return 0;
}

