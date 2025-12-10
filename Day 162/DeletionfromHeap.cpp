//when we are deleting from heap we replace the root node with the last node and then we delete the last node
//after that we compare the root node with its children and swap it with the largest child if it is smaller than the largest child


//we delete the last node so that the complete binary tree property is maintained
//Heapify is called to maintain the heap property

//TC is O(logn) because we delete one node which is O(1) and  in the worst case we may have to travel the height of the tree 
//to adjust the heap which is logn

#include<iostream>
using namespace std;

class MaxHeap{
    public:
    int *arr;
    int size;
    int total_size;
    MaxHeap(int n){ //n is the size of the array
        arr = new int[n];
        size = 0; //initally 0
        total_size = n;
    }


void insert(int val){   
    int index;
    //insert at the end
    if(size == total_size){
        return; //heap is full
    }
    arr[size] = val;
    index = size;
    size++;

    //compare with the parent and check if its valid Max heap
    while(index > 0 && arr[index] > arr[(index-1)/2]){
        swap(arr[index], arr[(index-1)/2]);
        index = (index-1)/2;
    }

    cout << "Inserted " << val << " into the Max Heap." << endl;

}

void Heapify(int index){
    int largest = index;
    int left= 2*index + 1; //getting index of left child
    int right = 2*index + 2; //getting index of right child

    if(left<size && arr[left]>arr[largest]){ //checking if left child is larger than root
        largest = left;
    }
    if(right<size && arr[right]>arr[largest]){//checking if right child is larger than largest so far
        largest = right;
    }
    if(largest != index){
        swap(arr[largest], arr[index]);
        /*
    because after the swap the pushed-down value might still be smaller than its own children — so we must continue pushing 
    it down until it lands in a place where both children are ≤ it. 
    If it’s already in correct place, the recursive call will find largest == index and return immediately.
    */
        Heapify(largest);
    }
}
void deleteRoot(){
    if(size == 0){
        cout << "Heap is Empty!!";
    }
    //Replacing with the last node
    arr[0] = arr[size-1];
    size--;

    cout << "Deleted root element from the Max Heap." << endl;

    if(size == 0){ //if after deletion heap becomes empty
        return;
    }
    Heapify(0); //Heapify from the root node
}
};
int main(){
    MaxHeap h(5);
    h.insert(10);
    h.insert(20);
    h.deleteRoot();
    h.insert(5);
    h.insert(30);
    h.insert(25);

    for(int i=0;i<h.size;i++){
        cout<<h.arr[i]<<" ";
    }
    return 0;


}
