/*
struct node
{
    int data;
    node* left;
    node* right;
};

*/
deque<int>q;
void topView(node * root) {
if(root)
   q.push_back(root->data);
  node *left=root->left;
   while(left){
       q.push_front(left->data);
       left=left->left;
   } 
   node *right=root->right ;
     while(right){
       q.push_back(right->data);
       right=right->right;
   }
    for(int t : q)
        cout<<t<<" ";
}

