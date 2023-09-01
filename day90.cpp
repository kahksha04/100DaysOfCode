// Given a Binary Tree of size N, Print the corner nodes ie- the node at the leftmost and rightmost of each level.

void printCorner(Node *root)
{

// Your code goes here
if(root==NULL){
    return;
}

queue<Node*>q;
q.push(root);

while(!q.empty()){
    int n=q.size();
    for(int i=0;i<n;i++){
        Node* temp=q.front();
        q.pop();
        
        if(i==0 || i==n-1){
            cout<<temp->data<<" ";
        }
        
        if(temp->left){
            q.push(temp->left);
        }
        
        if(temp->right){
            q.push(temp->right);
        }
    }
}

}
