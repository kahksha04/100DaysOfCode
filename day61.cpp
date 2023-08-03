// Given a Binary Tree, return Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side.

vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   if(root==NULL){
       return ans;
   }
   map<int,int> m;
   queue<pair<Node*,int>>q;
   
   q.push(make_pair(root,0));
   
   while(!q.empty()){
       pair<Node*,int> temp=q.front();
       q.pop();
       Node* frontNode=temp.first;
       int hd=temp.second;
       
       if(!m[hd]){
           m[hd]=frontNode->data;
       }
       
       if(frontNode->left){
           q.push(make_pair(frontNode->left,hd+1));
       }
       
       if(frontNode->right){
           q.push(make_pair(frontNode->right,hd+1));
       }
   }
   
   for(auto i:m){
       ans.push_back(i.second);
   }
   
   return ans;
}
