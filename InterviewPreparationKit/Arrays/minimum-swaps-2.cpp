#include <bits/stdc++.h>;

using namespace std;

int main(){
    int n;

    cin>>n;

    int arr[n+1];
    arr[0] = 0;
    for(int i=1 ; i<=n ; i++)
        cin>>arr[i];

    int swaps = 0;
    for(int i=1 ; i<=n ; ){

        if(i != arr[i]){
            int temp = arr[arr[i]];
            arr[arr[i]] = arr[i];
            arr[i] = temp;
            swaps++;
        }
        else
            i++;
    }
    cout<<swaps;

}
