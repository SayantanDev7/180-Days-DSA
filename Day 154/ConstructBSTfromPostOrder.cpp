#include <bits/stdc++.h>
#include <climits>
using namespace std;

class Node {
    public: 
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
Node *BST(int post[],int &index,int lower,int upper){
    if(index < 0 || post[index] < lower || post[index] > upper)
        return NULL;
    Node* root = new Node(post[index--]);
    root -> right = BST(post,index,root -> data,upper);
    root -> left = BST(post,index,lower,root -> data);
    return root;
}
Node *constructTree(int post[], int size) {
    // code here
    int index = size-1;
    return BST(post,index,INT_MIN,INT_MAX);
    
}
void inorder(Node* root){
    if(root == NULL)
        return;
    inorder(root -> left);
    cout<<root -> data<<" ";
    inorder(root -> right);
}

int main(){
    int post[] = {1,7,5,12,10,8};
    int size = sizeof(post)/sizeof(post[0]);
    Node* root = constructTree(post,size);
    cout<<"Inorder Traversal of Constructed BST: ";
    inorder(root);
    return 0;
}