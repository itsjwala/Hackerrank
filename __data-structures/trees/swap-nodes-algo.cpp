#include <bits/stdc++.h>
#define FASTIO ios::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
struct node
{
	int v,left,right,depth;

};
void inorder(node nodes[],int cur){
	if(cur>0){
		inorder(nodes,nodes[cur].left);
		cout<<nodes[cur].v<<" ";
		inorder(nodes,nodes[cur].right);
	}
}
void calDepth(node nodes[],int depth,int cur){

	if(cur>0){
		nodes[cur].depth=depth;
		calDepth(nodes,depth+1,nodes[cur].left);
		calDepth(nodes,depth+1,nodes[cur].right);
	}

}
void swapping(node nodes[],int n,int level){

for(int i=1;i<=n;i++)
	if(nodes[i].depth%level==0)
		 swap(nodes[i].left,nodes[i].right);

}
int main() {
	FASTIO;
	int n;
	cin>>n;
	
	node nodes[n+1];

	for(int i=1;i<=n;i++){
		cin>>nodes[i].left>>nodes[i].right;
	nodes[i].v=i;
	}
	calDepth(nodes,1,1);

	int t;
	cin>>t;
	while(t--){
		int level;
		cin>>level;

		swapping(nodes,n,level);
		inorder(nodes,1);
		cout<<endl;
	}


	return 0;
}

