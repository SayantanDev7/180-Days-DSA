#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* left;
    Node* right;
};
class Solution {
  public:
  
    // Returns:
    //  - negative value if target found (distance upward as negative)
    //  - positive height if not found
    int Burn(Node* root, int target, int &timer) {

        if (!root) return 0;

        // Target found at this node
        /*
        this block is for case when the current node is the target node 
        we need to go downward and calculate the height of both subtrees
        and update the timer with the maximum height
        return -1 to indicate that target is found at this node
        */
        if (root->data == target){
            int lh = Burn(root->left, target, timer); //explore left subtree
            int rh = Burn(root->right, target, timer); //explore right subtree
            timer = max(lh, rh); //max height from target node to leaf node in either subtree
            return -1; //returning -1 to indicate that target is found at this node
        }  

        int left = Burn(root->left, target, timer);
        int right = Burn(root->right, target, timer);

        // If target found in left subtree

        /*
        left-1 / right-1 indicates going one level upward from the child node where target was found and tells how far the current node is from the target node
        we then calculate the height of the opposite subtree (right subtree if target found in left subtree and vice versa)
        
        */
        if (left < 0) {
            timer = max(timer, (-left) + right);
            return left - 1;    // go one level upward
        }

        // If target found in right subtree
        if (right < 0) {
            timer = max(timer, (-right) + left);
            return right - 1; // go one level upward
        }

        // If target not found in either subtree → return height
        return 1 + max(left, right);
        
    }

   

    int minTime(Node* root, int target) {

        int timer = 0;
        
        // Corrected parameter order
        Burn(root, target, timer);

        return timer;
    }
};

int main() {
    Solution sol;

    // Example usage:
    Node* root = new Node{1};
    root->left = new Node{2};
    root->right = new Node{3};
    root->left->left = new Node{4};
    root->left->right = new Node{5};
    root->right->right = new Node{6};

    int target = 2;
    int result = sol.minTime(root, target);
    cout << "Minimum time to burn the tree from target " << target << " is: " << result << endl;

    // Clean up memory (not shown here for brevity)

    return 0;
}