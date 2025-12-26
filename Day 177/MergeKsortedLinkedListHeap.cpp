/*
TC is O(nk log k) where n is the average number of nodes in each linked list and k is the number of linked lists.
SC is O(k) for the heap data structure to store k nodes at a time.
*/

#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }   
};
struct compare{
    bool operator()(Node* a, Node* b){
        /*
        for all cases other than Heap 
        return a->data <= b->data; sort the elements in increasing order
        return a->data >= b->data; sort the elements in decreasing order
        but for Heap we need to return the opposite condition because of the way Heap works internally
        for min heap we need to return a->data > b->data
        for max heap we need to return a->data < b->data
        */
        return a->data > b->data;
    }
};
Node* mergeKLists(vector<Node*>& arr) {
        // code here
        priority_queue<Node*, vector<Node*>, compare> minHeap;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=NULL){
                minHeap.push(arr[i]);
            }
        }
        
        Node* root = new Node(0);
        Node* tail = root;
        Node* temp;

        while(!minHeap.empty()){
            temp = minHeap.top();
            minHeap.pop();
            tail->next = temp;
            tail = tail->next;
            if(temp -> next != NULL){
                minHeap.push(temp->next);
            }
        }
        return root->next;
    }
int main(){
    //write your code here
    return 0;
}