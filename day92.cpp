// Given two Binary Trees. Check whether they are Isomorphic or not.

class Solution{
  public:
    // Return True if the given trees are isomotphic. Else return False.
    bool isIsomorphic(Node *root1,Node *root2)
    {
        //add code here.
        if(!root1 && !root2){
            return true;
        }
        if(!root1 || !root2){
            return false;
        }
        
        if(root1->data!=root2->data){
            return false;
        }
        
        bool side1=isIsomorphic(root1->left,root2->left)&&isIsomorphic(root1->right,root2->right);
        bool side2=isIsomorphic(root1->left,root2->right)&&isIsomorphic(root1->right,root2->left);
        return side1||side2;
    }
};
