// Given a Binary Tree. Find the Zig-Zag Level Order Traversal of the Binary Tree.

class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> res;
    	if(root==NULL){
    	    return res;
    	}
    	queue<Node*> q;
    	q.push(root);
    	bool leftRight=true;
    	
    	while(!q.empty()){
    	    int n=q.size();
    	    vector<int> ans(n);
    	    
    	    for(int i=0;i<n;i++){
    	        Node* frontNode=q.front();
    	        q.pop();
    	        int j=leftRight? i: n-i-1;
    	        ans[j]=frontNode->data;
    	        
    	        if(frontNode->left){
    	            q.push(frontNode->left);
    	        }
    	        
    	        if(frontNode->right){
    	            q.push(frontNode->right);
    	        }
    	        
    	        }
    	        leftRight=!leftRight;
    	        for(auto i:ans){
    	            res.push_back(i);
    	    }
    	}
    	return res;
    }
};
