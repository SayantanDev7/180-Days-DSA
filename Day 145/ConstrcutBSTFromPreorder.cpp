
#include <bits/stdc++.h>
#include <climits>
using namespace std;
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    TreeNode* BST(vector<int>& preorder,int &index,int lower,int upper){
        if(index == preorder.size() || preorder[index] < lower || preorder[index] > upper)
            return NULL;
        TreeNode* root = new TreeNode(preorder[index++]);
        root -> left = BST(preorder,index,lower,root -> val);
        root -> right = BST(preorder,index,root -> val,upper);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int index = 0;
        return BST(preorder,index,INT_MIN,INT_MAX);
    }
};
void inorder(TreeNode* root){
    if(root == NULL)
        return;
    inorder(root -> left);
    cout<<root -> val<<" ";
    inorder(root -> right);
}
int main(){
    int ind = 0;
    vector<int> preorder = {8,5,1,7,10,12};
    Solution obj;
    TreeNode* root = obj.bstFromPreorder(preorder);
    cout<<"Inorder Traversal of Constructed BST: ";
    inorder(root);
    return 0;
}