// Given a Binary Search Tree ,change old key value present in the tree to the given new key value.

void building(struct node*root,vector<int>vt,int &index)
{
    if(root==NULL)
        return;
    if(index>=vt.size())
        return;
    building(root->left,vt,index);
    root->key = vt[index];
    index++;
    building(root->right,vt,index);
}
void inorder(struct node* root,int oldval,vector<int>&vt)
{
    if(root==NULL)
        return ;
    
    inorder(root->left,oldval,vt);
    if(root->key != oldval)
        vt.push_back(root->key);
    inorder(root->right,oldval,vt);
}
struct node *changeKey(struct node *root, int oldVal, int newVal)
{
    // Code here
    vector<int> vt;
    inorder(root,oldVal,vt);
    vt.push_back(newVal);
    sort(vt.begin(),vt.end());
    int index=0;
    building(root,vt,index);
    return root;
}
