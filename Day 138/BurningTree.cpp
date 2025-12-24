#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};
class Solution {
  public:
  
    /*
    Negative return values mean “target found below”
    Positive return values mean “normal subtree height”
    */
    int Burn(Node* root, int target, int &timer) {

        if (!root) return 0;

        // Target found at this node
        if (root->data == target)
            return -1;   // negative indicates upward distance

        int left = Burn(root->left, target, timer); //explore left subtree and if -ve value is returned, it means target is found in left subtree
        int right = Burn(root->right, target, timer); //explore right subtree and if -ve value is returned, it means target is found in right subtree

        // If target found in left subtree
        if (left < 0) {
            timer = max(timer, (-left) + right); //-left = distance from left child to target
            return left - 1;    // go one level upward
        }

        // If target found in right subtree
        if (right < 0) {
            timer = max(timer, (-right) + left); //-right = distance from right child to target
            return right - 1;
        }

        // If target not found in either subtree → return height
        return 1 + max(left, right);
    }

    
    // Find the target node pointer inside the tree
    void find(Node* root, int target, Node* &BurnNode) { // This block  finds the starting point of fire
        if (!root) return;
        if (root->data == target) {
            BurnNode = root; //BurnNode is passed by reference, so the caller gets the result
            return;
        }
        find(root->left, target, BurnNode); //If target is in the left subtree, this call will find it..and DFS continues
        find(root->right, target, BurnNode); //If target is in the right subtree, this call will find it..and DFS continues
    }

    // Normal height of a subtree
    int Height(Node* root) {
        if (!root) return 0;
        return 1 + max(Height(root->left), Height(root->right));
    }

    int minTime(Node* root, int target) {

        int timer = 0;
        
        // Corrected parameter order
        Burn(root, target, timer);

        // Burnnode stores the address of the target node
        Node* BurnNode = NULL; 
        find(root, target, BurnNode); // Finding the target node in the tree

        // Height of subtree under target node
        int height = Height(BurnNode) - 1; //-1 here to not count the target node itself

        return max(timer, height);
    }
};
int main(){
    Node* root = new Node();
    root -> data = 1;
    root -> left = new Node();
    root -> left -> data = 2;
    root -> right = new Node();
    root -> right -> data = 3;
    root -> left -> left = new Node();
    root -> left -> left -> data = 4;
    root -> left -> right = new Node();
    root -> left -> right -> data = 5;
    Solution obj;
    int target = 2;
    cout<<obj.minTime(root, target);
    return 0;
}