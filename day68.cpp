// Given 2 Arrays of Inorder and preorder traversal. The tree can contain duplicate elements. Construct a tree and print the Postorder traversal. 

class Solution{
    public:
    int find(int in[],int n,int val,int start,int end){
        for(int i=start;i<=end;i++){
            if(in[i]==val){
                return i;
            }
        }
        return -1;
    }
    
    Node* solve(int in[],int pre[],int &ind,int start,int end,int n){
        if(ind>=n || start>end){
            return NULL;
        }
        
        int val=pre[ind++];
        Node* temp=new Node(val);
        int pos=find(in,n,val,start,end);
        
        temp->left=solve(in,pre,ind,start,pos-1,n);
        temp->right=solve(in,pre,ind,pos+1,end,n);
        
        return temp;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int ind=0;
        Node* root=solve(in,pre,ind,0,n-1,n);
        return root;
    }
};
