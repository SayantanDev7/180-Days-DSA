#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
};

class Solution {
  public:
    void inorder(Node* root,vector<int>&ans){
        if(!root)
            return;
        inorder(root -> left,ans);
        ans.push_back(root -> data);
        inorder(root -> right,ans);
    }
    
    void postorder(Node* root,vector<int> &ans,int &ind){
        if(!root)
            return;
        
        postorder(root -> left,ans,ind);
        postorder(root -> right,ans,ind);
        root -> data = ans[ind];
        ind++;
    }
    
    void convertToMaxHeapUtil(Node* root) {
        // Your code goes here
        vector<int> ans;
        inorder(root,ans);
        
        int ind=0;
        postorder(root,ans,ind);
    }
};

int main(){
    return 0;
}