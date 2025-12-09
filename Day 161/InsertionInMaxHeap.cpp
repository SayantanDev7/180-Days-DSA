//TC is O(nlogn) because in the worst case we may have to travel the height of the tree which is logn for each insertion 
//and we are doing n insertions

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
};
int main(){
    MaxHeap h(5);
    h.insert(10);
    h.insert(20);
    h.insert(5);
    h.insert(30);
    h.insert(25);

    for(int i=0;i<h.size;i++){
        cout<<h.arr[i]<<" ";
    }
    return 0;


}
