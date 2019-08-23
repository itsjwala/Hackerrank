#include<stdlib.h>
#include <stdio.h>
int main(){
    int n;
    int k;
    scanf("%d %d",&n,&k);
    int *a = malloc(sizeof(int) * n);
    for(int  i= 0; i< n; i++)
       scanf("%d",&a[i]);
    int count=1;
    for(int i=(k)%n;count<=n;count++,i=(i+1)%n)
        printf("%d ",a[i]);
    free(a);
    return 0;
}